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

void					RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	static int time = std::time(0);

	std::srand(time);
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully.\n";
	else
		std::cout << "Robotomization of " << this->_target << " has failed.\n";
}