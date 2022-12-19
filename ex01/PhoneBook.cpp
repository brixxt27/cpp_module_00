#include <iomanip>
#include "PhoneBook.hpp"
#include <sstream>
#include <string>

PhoneBook::PhoneBook()
: idx_(0)
{}

int		PhoneBook::GetIdx() {
	return idx_;
}

void	PhoneBook::SetIdx() {
	if (idx_ == 8)
		idx_ = 0;
	else
		++idx_;
}

void	PhoneBook::Add() {
	std::string	str = "";

	std::cout << "* first name *" << std::endl;
	std::cout << "==> ";
	std::cin >> str;
	std::cout << std::endl;

	if (std::cin.eof() == true)
		return;
	phone_book_[idx_].SetFirstName(str);
	std::cout << phone_book_[idx_].GetFirstName() << std::endl;
}

void	PhoneBook::Search() const {
	int	idx = -1;

	std::cout << "Search: Input an integer number between 0 and 8 on the next line" << std::endl;
	std::cout << "==> ";
	std::cin >> idx;
	std::cout << std::endl;

	if (std::cin.eof() == true)
		return;
	if (std::cin.fail() == false && (idx >= 0 && idx <= 8)) {
		std::cout
		<< std::setw(10) << std::right << "index" << "|"
		<< std::setw(10) << std::right << "first name" << "|"
		<< std::setw(10) << std::right << "last name" << "|"
		<< std::setw(10) << std::right << "nickname" << std::endl;
		
		std::cout
		<< std::setw(10) << std::right << phone_book_[idx].GetFirstName() << "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetLastName() << "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetLastName() << "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetNickname() << std::endl;
	}
	else {
		std::cout << "※ Error: Index is out of range or wrong ※\n" << std::endl;
		std::cin.clear();
		std::cin.ignore(LLONG_MAX, '\n');
	}
}
