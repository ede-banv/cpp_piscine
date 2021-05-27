#ifndef __PRESIDENTIALPARDONFORM__
# define __PRESIDENTIALPARDONFORM__

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
		void					execute(Bureaucrat const & executor) const;
	private:
		/*args*/
};

#endif
