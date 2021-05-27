#ifndef __FORM__
# define __FORM__

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	public:
		Form(std::string name, int sign_grade, int exec_grade);
		Form(const Form& copy);
		virtual ~Form();

		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};

		Form&				operator=(const Form& rhs);
		const std::string	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				getSignState() const;
		void				beSigned(Bureaucrat& signer);
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign_grade;
		const int			_exe_grade;

		Form();
};

std::ostream&	operator<<(std::ostream& o, Form& rhs);

#endif
