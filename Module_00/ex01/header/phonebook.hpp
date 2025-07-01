#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

//	CLASSES

class	Contact
{
	public:
		Contact();
		~Contact();
		void		fill_contact();
		void		print_search();
		void		print_full_data();
		int			check_filled();
		int			id;
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
		std::string	format_str(std::string str);
		int			valid_name(std::string str);
		int			valid_phone(std::string str);
		void		clear_contact();
};

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	srch_contact();
	private:
		Contact Contact[8];
		int		filled_contacts;
};

#endif
