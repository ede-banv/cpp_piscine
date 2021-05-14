#ifndef __PONY__
# define __PONY__

# include <iostream>

class Pony
{
	public:
		Pony(std::string name, std::string color, std::string speed, std::string size);
		~Pony();

		void	printAttributes() const;
	private:
		std::string	_name;
		std::string	_color;
		std::string	_speed;
		std::string	_size;
};

void	ponyOnTheStack();
void	ponyOnTheHeap();

#endif