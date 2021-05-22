#ifndef __VICTIM__
# define __VICTIM__

#include <iostream>

class Victim
{
	public:
		Victim(std::string name);
		Victim(const Victim& copy);
		~Victim();

		Victim&			operator=(const Victim& rhs);
		std::string		getName() const;
		virtual void	getPolymorphed() const;
	protected:
		std::string	_name;

		Victim();
};

std::ostream&	operator<<(std::ostream& o, Victim& rhs);

#endif
