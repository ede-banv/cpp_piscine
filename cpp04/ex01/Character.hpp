#ifndef __CHARACTER__
# define __CHARACTER__

# include <iostream>
# include <fstream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(const std::string& name);
		Character(const Character& copy);
		~Character();

		Character&	operator=(const Character& rhs);
		void		recoverAP();
		void		equip(AWeapon* weapon);
		void		attack(Enemy* enemy);
		int			getAP() const;
		std::string	getName() const;
		AWeapon*	getWeapon() const;
	private:
		int			_ap;
		std::string	_name;
		AWeapon*	_weapon;

		Character();
};

std::ostream&	operator<<(std::ostream& o, Character& rhs);

#endif
