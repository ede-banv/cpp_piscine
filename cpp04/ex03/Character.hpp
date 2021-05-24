#ifndef __CHARACTER__
# define __CHARACTER__

# include "ICharacter.hpp"
# include <string.h>

class Character: public ICharacter
{
	public:
		Character(std::string name);
		Character(const Character& copy);
		~Character();

		Character&			operator=(const Character& rhs);
		const std::string&	getName() const;
        void 				equip(AMateria* m);
        void				unequip(int idx);
        void				use(int idx, ICharacter& target);
	private:
		std::string	_name;
		AMateria*	_inventory[4];

		Character();
};

#endif
