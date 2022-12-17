#include <iostream>
#include "PhoneBook.hpp"

int	main() {
	std::string	str = "";
	PhoneBook	phone_book;
	
	while (str != "EXIT") {
		std::cout << "*** Input command on next line ***" << std::endl;
		std::cin >> str;

		if (str == "ADD") {
			phone_book.Add();
		}

		if (str == "SEARCH") {
			phone_book.Search();
		}
	}
	std::cout << "Phone book is over!" << std::endl;
	return 0;
}
