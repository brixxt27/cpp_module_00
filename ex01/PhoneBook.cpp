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

Contact	PhoneBook::GetPhoneBook(int idx_) const {
	return phone_book_[idx_];
}

bool	SaveInfo(const char *field, void (*f)(std::string& field)) {
	std::string	str = "";

	std::cout << "* " << field << " *" << std::endl;
	std::cout << "==> " << std::endl;
	std::cin >> str;
	std::cout << std::endl;

	if (std::cin.eof() == true)
		return;
	// PhoneBook::phone_book_[idx_].SetFirstName(str);
	PhoneBook::GetPhoneBook(PhoneBook::GetIdx()).
}

void	PhoneBook::Add() {
	/* 모듈화 진행 중!
	std::string	str = "";

	std::cout << "* first name *" << std::endl;
	std::cout << "==> " << std::endl;
	std::cin >> str;
	std::cout << std::endl;

	if (std::cin.eof() == true)
		return;
	phone_book_[idx_].SetFirstName(str);
	*/


	phone_book_[idx_].SetMyIdx(idx_);
	SetIdx();
}

void	PhoneBook::Search() const {
	int	idx = -1;

	std::cout << "Search: Input an integer number between 0 and 7 on the next line" << std::endl;
	std::cout << "==> " << std::endl;
	std::cin >> idx;
	std::cout << std::endl;

	if (std::cin.eof() == true)
		return;
	if (std::cin.fail() == false && (idx >= 0 && idx < 8)) {
		std::cout
		<< std::setw(10) << std::right << "index" << "|"
		<< std::setw(10) << std::right << "first name" << "|"
		<< std::setw(10) << std::right << "last name" << "|"
		<< std::setw(10) << std::right << "nickname" << std::endl;
		
		std::cout
		<< std::setw(10) << std::right << GetIdx() << "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetFirstName() << "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetLastName() << "|"
		<< std::setw(10) << std::right << phone_book_[idx].GetNickname() << std::endl;
	}
	else {
		std::cout << "※ Error: Index is out of range or wrong ※\n" << std::endl;
		std::cin.clear();
		std::cin.ignore(LLONG_MAX, '\n');
	}
}
