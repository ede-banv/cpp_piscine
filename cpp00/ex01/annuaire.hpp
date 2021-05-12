#include <iostream>

class Annuaire
{
	public:
		Annuaire(char *fname, char *lname, char* nickname, char *login, char *padress, char *email, int number[10], int bday[3][2], char *fav_meal, char* underwear, char* secret);
		~Annuaire();

		void	getSearch() const;
		void	getContact() const;
	private:
		char *fname;
		char *lname;
		char* nickname;
		char *login;
		char *padress;
		char *email;
		int number[10];
		int bday[3][2];
		char *fav_meal;
		char* underwear;
		char* secret;
}