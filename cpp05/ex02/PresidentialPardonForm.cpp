#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("Presidential Pardon Form", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("Presidential Pardon Form", 25, 5, target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	this->_target = rhs._target;
	this->_signed = rhs.getSignState();
	return *this;
}

void					PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}
