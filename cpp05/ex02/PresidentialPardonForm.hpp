#ifndef __PRESIDENTIALPARDONFORM__
# define __PRESIDENTIALPARDONFORM__

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
		void					execute(const Bureaucrat& executor) const;
	private:
		PresidentialPardonForm();
};

#endif
