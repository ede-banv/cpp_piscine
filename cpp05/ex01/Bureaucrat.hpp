#ifndef __BUREAUCRAT__
# define __BUREAUCRAT__

# include <iostream>
# include <fstream>
# include "Form.hpp"
class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		virtual ~Bureaucrat();

		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};

		Bureaucrat&	operator=(const Bureaucrat& rhs);
		const std::string	getName() const;
		int					getGrade() const;
		void				upgrade();
		void				downgrade();
		void				signForm(Form&	form);
	private:
		const std::string	_name;
		int					_grade;

		Bureaucrat();
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat& rhs);

#endif
