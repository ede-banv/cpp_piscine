#include <iostream>
#include <fstream>

std::string new_write(const std::string& line, const std::string& s1, const std::string& s2)
{
    std::string         newline;
    unsigned long int   pos = 0;
    unsigned long int   oldpos = pos;
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        newline.append(line.substr(oldpos, pos - oldpos));
        newline.append(s2);
        pos += s1.size();
        oldpos = pos;
    }
    newline.append(line.substr(oldpos, pos - oldpos));
    
    return newline;
}

void        replace(const std::string filename, const std::string s1, const std::string s2)
{
    std::ifstream   fd(filename.c_str());
    if (!fd.is_open())
    {
        std::cout << "Couldn't open source file" << std::endl;
        return;
    }
    std::string     newname = filename + ".replace";
    std::ofstream   newfd(newname.c_str());
    if (!newfd.is_open())
    {
        std::cout << "Couldn't open/create new file" << std::endl;
        return;
    }
    std::string     line;
    while (std::getline(fd, line))
        newfd << new_write(line, s1, s2) << std::endl;

}

int         main(int ac, char **av)
{
    if (ac < 2 || ac > 4)
    {
        std::cout << "Incorrect number of arguments!" << std::endl;
        return (1);
    }
    else if (av[1][0] == '\0' || av[2][0] == '\0' || av[3][0] == '\0')
    {
        std::cout << "Please make sure none of your arguments are void" << std::endl;
        return (1);
    }
    else
        replace(av[1], av[2], av[3]);
    return (1);
}

