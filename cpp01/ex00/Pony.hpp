#ifndef __PONY__
# define __PONY__

# include <iostream>

class Pony
{
public:
	Pony();
	~Pony();
private:
	std::string	_name;
	std::string	_color;
	std::string	_speed;
	std::string	_size;
};

#endif