#include <../header/phonebook.hpp>

static void	welcome_screen(void);

int	main(void)
{
	std::string	cmmd;
	PhoneBook	PhoneBook;

	welcome_screen();
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, cmmd);
		if (cmmd == "ADD")
			PhoneBook.add_contact();
		else if (cmmd == "SEARCH")
			PhoneBook.srch_contact();
		else if (cmmd == "EXIT")
			break;
		else
			std::cout << "Unknown command: " << cmmd << "\n";
	}
	return (0);
}

static void	welcome_screen(void)
{
	std::cout 
		<< "####################################################\n"
		<< "###                                              ###\n"
		<< "###                 PHONEBOOK                    ###\n"
		<< "###                                              ###\n"
		<< "###         'ADD' to add a new contact           ###\n"
		<< "###      'SEARCH' to search for a contact        ###\n"
		<< "###    'EXIT' to exit and clear all contacts     ###\n"
		<< "###                                              ###\n"
		<< "####################################################\n";
}
