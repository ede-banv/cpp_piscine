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
		std::string	_fname;
		std::string	_lname;
		std::string	_nickname;
		std::string	_login;
		std::string	_paddress;
		std::string	_email;
		std::string _number;
		std::string _bday;
		std::string	_fav_meal;
		std::string	_underwear;
		std::string	_secret;
};

#endif