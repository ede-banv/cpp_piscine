#include "Form.hpp"

Form::Form(){}

Form::Form(std::string name, int sign_grade, int exec_grade): _name(name), _signed(false)
{
	if (sign_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (sign_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_sign_grade = sign_grade;
	if (exec_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (exec_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_exec_grade = exec_grade;
}

Form::Form(const Form& copy):
_name(copy._name), _sign_grade(copy.sign_grade), _exec_grade(copy.exec_grade)
{
	*this = copy;
}

Form::~Form(){}

const char*		Form::GradeTooLowException::what() const throw()
{
	return "\n";
}

const char*		Form::GradeTooHighException::what() const throw()
{
	return "\n";
}

Form&			Form::operator=(const Form& rhs)
{
	this->_signed = rhs._signed //because name and grade are constant
}

void			Form::beSigned(Bureaucrat& signer)
{
	try
	{
		this->_sign_grade - signer->getGrade() >= 0;
	}
	catch (std::exception & e)
	{
		std::cout << signer->getName() << " cant sign " << this->_name << " because " << e.what();
	}
}

std::ostream&	operator<<(std::ostream& o, Form& rhs)
{

}
