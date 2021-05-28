#include "Form.hpp"

Form::Form():_name(""), _signed(false), _sign_grade(150), _exe_grade(150) {}

Form::Form(std::string name, int sign_grade, int exec_grade): _name(name), _signed(false), _sign_grade(sign_grade), _exe_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	return;
}

Form::Form(std::string name, int sign_grade, int exec_grade, std::string target):
_name(name), _signed(false), _sign_grade(sign_grade), _exe_grade(exec_grade), _target(target)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	return;
}

Form::Form(const Form& copy):
_name(copy._name), _sign_grade(copy._sign_grade), _exe_grade(copy._exe_grade)
{
	*this = copy;
}

Form::~Form(){}

const char*			Form::GradeTooLowException::what() const throw()
{
	return "The given grade is too low\n";
}

const char*			Form::GradeTooHighException::what() const throw()
{
	return "The given grade is too high\n";
}

Form&				Form::operator=(const Form& rhs)
{
	this->_signed = rhs._signed; //because name and grade are constant
	return *this;
}

const std::string	Form::getName() const
{ return this->_name; }

int					Form::getSignGrade() const
{ return this->_sign_grade; }

int					Form::getExecGrade() const
{ return this->_exe_grade; }

bool				Form::getSignState() const
{ return this->_signed; }


void				Form::beSigned(Bureaucrat& signer)
{
	if (this->_sign_grade < signer.getGrade())
		throw Bureaucrat::GradeTooLowException();
	else
		this->_signed = true;

}

void				Form::execute(const Bureaucrat& executor) const
{
	if (!this->_signed)
	{
		throw std::logic_error("Form not signed, could not excecute\n");
	}
	if (this->_exe_grade < executor.getGrade())
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

std::ostream&		operator<<(std::ostream& o, Form& rhs)
{
	o << "Form " << rhs.getName() << (rhs.getSignState() ? ": Signed" : ": Not Signed") <<"\nSign Grade: " << rhs.getSignGrade() << "\nExec Grade: " << rhs.getExecGrade() << std::endl;
	return o;
}
