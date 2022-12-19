#include <iomanip>
#include "PhoneBook.hpp"
#include <sstream>
#include <string>

PhoneBook::PhoneBook()
: idx_(0)
{}

void	PhoneBook::Add() {
	std::string	str = "";

	while (str == "") {
		std::cout << "* Input the first name that isn't empty on the next line *" << std::endl;
		std::cin >> str;
	}
	phoneBook_[idx_].SetFirstName(str);
}

static int	IsBetween0To8(std::string& str) {
	return str == "0" || str == "1" || str == "2" || str == "3" || str == "4"
		|| str == "5" || str == "6" || str == "7" || str == "8";
}

void	PhoneBook::Search() const {
	std::string			str;

	std::cout << "*** Input an integer number between 0 and 8 on the next line ***" << std::endl;
	std::cin >> str;
	if (IsBetween0To8(str)) {
		std::cout
		<< std::setw(10) << std::right << "index" << "|"
		<< std::setw(10) << std::right << "first name" << "|"
		<< std::setw(10) << std::right << "last name" << "|"
		<< std::setw(10) << std::right << "nickname" << std::endl;
	}
	else {
		std::cout << "Index is out of range or wrong!" << std::endl;
	}
}
