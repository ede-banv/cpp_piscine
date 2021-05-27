#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat(){}

const char*			Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat's grade too low.\n";
}

const char*			Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat's grade too high.\n";
}

Bureaucrat&			Bureaucrat::operator=(const Bureaucrat& rhs)
{
	this->_grade = rhs.getGrade(); //name is constant so can't be assigned
	return *this;
}

const std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int					Bureaucrat::getGrade() const
{
	return this->_grade;
}

void				Bureaucrat::upgrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void				Bureaucrat::downgrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void				Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(std::exception& e)
	{
		std::cout << this->_name << " cannot sign form " << form.getName() << " because " << e.what();
		return ;
	}
	std::cout << this->_name << " signs form " << form.getName() << std::endl;
}

std::ostream&		operator<<(std::ostream& o, Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".\n";
	return o;
}