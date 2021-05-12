#ifndef __ANNUAIRE__
# define __ANNUAIRE__

# include <iostream>

class Annuaire
{
	public:
		Annuaire();
		~Annuaire();

		int		createContact();
		void	getSearch() const;
		void	getContact() const;
	private:
		std::string	fname;
		std::string	lname;
		std::string	nickname;
		std::string	login;
		std::string	paddress;
		std::string	email;
		std::string number;
		std::string bday;
		std::string	fav_meal;
		std::string	underwear;
		std::string	secret;
};

#endif