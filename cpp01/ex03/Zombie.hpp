#ifndef __ZOMBIE__
# define __ZOMBIE__

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string	name, std::string type);
		~Zombie();

		void	announce() const;
	private:
		std::string	_name;
		std::string _type;
};

void	randomChump();
#endif