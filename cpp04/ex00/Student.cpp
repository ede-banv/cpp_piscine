#include "Student.hpp"

Student::Student(): Victim(){}

Student::Student(std::string name): Victim(name)
{
	std::cout << "Welcome to 42 Student " << this->_name << std::endl;
}

Student::Student(const Student& copy)
{
	*this = copy;
}

Student::~Student()
{
	std::cout << "42 Student " << this->_name << " just got absorbed by the Black Hole" << std::endl;
}

Student&	Student::operator=(const Student& rhs)
{
	this->_name = rhs.getName();
	return *this;
}

void		Student::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a spoiled cat! MEOW" << std::endl;
}
