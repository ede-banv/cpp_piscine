#ifndef __HUMAN_B__
# define __HUMAN_B__

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon& club);
		void	attack() const;
	private:
		std::string	_name;
		Weapon*		_danger;
};


#endif