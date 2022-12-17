#include <iomanip>
#include "PhoneBook.hpp"

#include <unistd.h>

void	PhoneBook::Add() {
	std::cout << std::setw(10) << "012345678901" << std::endl;
	std::cout << "Add345678901234" << std::endl;
}

void	PhoneBook::Search() const {
	int	idx;

	std::cout << "*** Input an integer index between 0 and 8 ***" << std::endl;
	std::cin >> idx;
	if (idx >= 0 && idx <= 8) {
		std::cout
		<< std::setw(10) << std::right << "index" << "|"
		<< std::setw(10) << std::right << "first name" << "|"
		<< std::setw(10) << std::right << "last name" << "|"
		<< std::setw(10) << std::right << "nickname" << std::endl;
	}
	else {
		std::cout << "Index is out of range or wrong!" << std::endl;
		std::cin.clear();
	}
}
