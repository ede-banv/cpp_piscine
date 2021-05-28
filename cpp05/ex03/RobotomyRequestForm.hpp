#ifndef __ROBOTOMYREQUESTFORM__
# define __ROBOTOMYREQUESTFORM__

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);
		void					execute(Bureaucrat const & executor) const;
	private:
		RobotomyRequestForm();
};

#endif
