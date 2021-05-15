#ifndef __ZOMBIE__
# define __ZOMBIE__

# include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string	name, std::string type);
		~Zombie();

		void	setZombie(std::string name, std::string type);
		void	announce() const;
	private:
		std::string	_name;
		std::string _type;
};

#endif