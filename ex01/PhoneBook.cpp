#include <iomanip>
#include "PhoneBook.hpp"
#include <sstream>
#include <string>

PhoneBook::PhoneBook()
: idx_(0)
{}

int		PhoneBook::GetIdx() const {
	return idx_;
}

void	PhoneBook::SetIdx() {
	if (idx_ == 7)
		idx_ = 0;
	else
		++idx_;
}


// static bool	SaveInfo(const Contact phone_book, const std::string& field, 
// 				void (*f)(std::string& field)) {
// 	std::string	str = "";

// 	std::cout << "* " << field << " *" << std::endl;
// 	std::cout << "==> " << std::endl;
// 	std::getline(std::cin, str);;
// 	std::cout << std::endl;

// 	if (std::cin.eof() == true)
// 		return;
// 	// PhoneBook::phone_book_[idx_].SetFirstName(str);
// 	phone_book.f(field);
// }

void	PhoneBook::Add() {
	std::string	str = "";

	std::cout << "* first name *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	phone_book_[idx_].SetFirstName(str);

	std::cout << "* last name *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);;
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	phone_book_[idx_].SetLastName(str);

	std::cout << "* nickname *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);;
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	phone_book_[idx_].SetNickname(str);

	std::cout << "* phone number *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);;
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	phone_book_[idx_].SetPhoneNumber(str);

	std::cout << "* darkest secret *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);;
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	phone_book_[idx_].SetDarkestSecret(str);

	// std::cin.ignore(LLONG_MAX, '\n');

	phone_book_[idx_].SetMyIdx(idx_);
	SetIdx();
}

void	PhoneBook::Search() const {
	int	idx = -1;

	std::cout << "Search: Input an integer number between 0 and 7" << std::endl;
	std::cout << "==> " << std::endl;
	std::cin >> idx;
	std::cout << std::endl;

	if (std::cin.eof() == true)
		return;
	if (std::cin.fail() == false && (idx >= 0 && idx < 8)) {
		std::cout
		<< "----------------------------------------------" << std::endl
		<< "|"
		<< std::setw(10) << std::right << "index" << "|"
		<< std::setw(10) << std::right << "first name" << "|"
		<< std::setw(10) << std::right << "last name" << "|"
		<< std::setw(10) << std::right << "nickname" << "|" << std::endl
		<< "----------------------------------------------" << std::endl;
		
		std::cout
		<< "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetMyIdx() << "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetFirstName() << "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetLastName() << "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetNickname() << "|" << std::endl
		<< "----------------------------------------------" << std::endl;
	}
	else {
		std::cout << "※ Error: Index is out of range or wrong ※\n" << std::endl;
		std::cin.clear();
		std::cin.ignore(LLONG_MAX, '\n');
	}
}
