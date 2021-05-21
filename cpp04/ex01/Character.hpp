#ifndef __CHARACTER__
# define __CHARACTER__

class Character
{
	public:
		Character();
		Character(const Character& copy);
		~Character();

		Character&	operator=(const Character& rhs);
	private:
		/*args*/
};

#endif
