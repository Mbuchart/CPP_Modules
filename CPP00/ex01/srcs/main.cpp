#include "../includes/Contact.hpp"
#include "../includes/Phone_book.hpp"

void	usage()
{
	std::cout << "Expected commands :" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
}

int main()
{
	Phone_book	pb;
	bool		end(false);
	std::string	cmd;

	std::cout << "welcome to the PHONE BOOK" << std::endl;
	std::cout << "You can use the commands: ADD, SEARCH and EXIT" << std::endl;
	do
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			pb.add_contact();
		else if (cmd == "SEARCH")
			pb.search_contact();
		else if (cmd == "EXIT")
			end = true;
		else
			usage();
		if (!std::cin.good() || std::cin.eof())
		{
			std::cout << "Input error." << std::endl;
			end = true;
		}
		cmd.erase();
	}
	while (!end);
	std::cout << "Goodbye!" << std::endl;
	return (0);
}