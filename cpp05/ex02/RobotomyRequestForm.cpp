#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("Robotomy Request Form", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("Robotomy Request Form", 72, 45, target)  {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy):Form(copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	this->_target = rhs._target;
	this->_signed = rhs.getSignState();
	return *this;
}
