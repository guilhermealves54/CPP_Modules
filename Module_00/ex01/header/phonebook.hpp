#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

//	CLASSES

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	srch_contact();
	private:
		Contact	Contact[8];
		int		filled_contacts;
};

PhoneBook::PhoneBook(void)
{
	filled_contacts = 0;
}
PhoneBook::~PhoneBook(void)
{}

class	Contact
{
	public:
		Contact();
		~Contact();
		void		fill_contact();
		void		print_search();
		void		print_full_data();
		int			check_filled();
	private:
		int			filled;
		std::string first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_nbr;
		std::string	dark_secrt;
		void		fill_first_name(void);
		void		fill_last_name(void);
		void		fill_nickname(void);
		void		fill_phone_nbr(void);
		void		fill_dark_secrt(void);
		void		clear_contact();
};

Contact::Contact(void)
{
	clear_contact();
}
Contact::~Contact(void)
{}

#endif
