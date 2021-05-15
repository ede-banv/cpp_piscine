#ifndef __HUMAN_A__
# define __HUMAN_A__

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& shadow);
		~HumanA();

		void	attack() const;
	private:
		std::string	_name;
		Weapon&		_shadow;
};

#endif