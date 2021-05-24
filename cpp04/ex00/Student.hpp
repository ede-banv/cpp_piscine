#ifndef __STUDENT__
# define __STUDENT__

# include "Victim.hpp"

class Student: public Victim
{
	public:
		Student(std::string name);
		Student(const Student& copy);
		~Student();

		Student&	operator=(const Student& rhs);
		void		getPolymorphed() const;
	private:
		Student();
};

#endif
