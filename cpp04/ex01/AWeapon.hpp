#ifndef __AWEAPON__
# define __AWEAPON__

#include <iostream>

class AWeapon
{
	public:
		AWeapon(const std::string& name, int apcost, int damage);
		AWeapon(const AWeapon& copy);
		virtual ~AWeapon();

		AWeapon&		operator=(const AWeapon& rhs);
		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
	protected:
		std::string	_name;
		int			_apcost;
		int			_damage;
};

#endif
