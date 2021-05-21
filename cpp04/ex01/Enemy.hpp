#ifndef __ENEMY__
# define __ENEMY__

#include <iostream>

class Enemy
{
	public:
		Enemy(int hp, const std::string& type);
		Enemy(const Enemy& copy);
		virtual ~Enemy();

		Enemy&			operator=(const Enemy& rhs);
		std::string		getType() const;
		int				getHP() const;
		virtual void	takeDamage(int n);
	protected:
		int			_hp;
		std::string	_type;
};

#endif
