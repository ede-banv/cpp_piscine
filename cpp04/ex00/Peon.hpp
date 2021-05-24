#ifndef __PEON__
# define __PEON__

# include "Victim.hpp"

class Peon: public Victim
{
	public:
		Peon(std::string name);
		Peon(const Peon& copy);
		~Peon();

		Peon&	operator=(const Peon& rhs);
		void	getPolymorphed() const;
	private:
		Peon();
};

#endif
