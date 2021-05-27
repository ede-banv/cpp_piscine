#ifndef __SHRUBBERYCREATIONFORM__
# define __SHRUBBERYCREATIONFORM__

# include "Form.hpp"

class ShrubberyCreationForm:  public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);
		void					execute(Bureaucrat const & executor) const;
	private:
		/*args*/
};

#endif
