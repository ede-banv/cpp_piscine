#ifndef __SORCERER__
# define __SORCERER__

#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer& copy);
		~Sorcerer();

		Sorcerer&	operator=(const Sorcerer& rhs);
		std::string	getName() const;
		std::string	getTitle() const;
		void		polymorph(const Victim& target) const;
	private:
		std::string	_name;
		std::string	_title;

		Sorcerer();
};

std::ostream&	operator<<(std::ostream& o, Sorcerer& rhs);

#endif
