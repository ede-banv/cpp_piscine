#ifndef __HUMAN__
# define __HUMAN__

# include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();

		void*			identify() const;
		const Brain&	getBrain() const;
	private:
		const Brain	brian;
};

#endif