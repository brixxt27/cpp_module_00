#include <iomanip>
#include "PhoneBook.hpp"
#include <sstream>
#include <string>

PhoneBook::PhoneBook()
: next_idx_(0)
, size_(0)
{}

int		PhoneBook::GetNextIdx() const {
	return next_idx_;
}

void	PhoneBook::SetNextIdx() {
	if (next_idx_ == 7)
		next_idx_ = 0;
	else
		++next_idx_;
}

int		PhoneBook::GetSize() const {
	return size_;
}

void	PhoneBook::SetSize() {
	++size_;
}

void	PhoneBook::Add() {
	std::string	str = "";

	std::cout << "* first name *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	if (str == "") {
		std::cout << "~ Error: A saved contact can’t have empty fields. ~\n" << std::endl;
		return;
	}
	phone_book_[next_idx_].SetFirstName(str);

	std::cout << "* last name *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);;
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	if (str == "") {
		std::cout << "~ Error: A saved contact can’t have empty fields. ~\n" << std::endl;
		return;
	}
	phone_book_[next_idx_].SetLastName(str);

	std::cout << "* nickname *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);;
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	if (str == "") {
		std::cout << "~ Error: A saved contact can’t have empty fields. ~\n" << std::endl;
		return;
	}
	phone_book_[next_idx_].SetNickname(str);

	std::cout << "* phone number *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);;
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	if (str == "") {
		std::cout << "~ Error: A saved contact can’t have empty fields. ~\n" << std::endl;
		return;
	}
	phone_book_[next_idx_].SetPhoneNumber(str);

	std::cout << "* darkest secret *" << std::endl;
	std::cout << "==> " << std::endl;
	std::getline(std::cin, str);;
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	if (str == "") {
		std::cout << "~ Error: A saved contact can’t have empty fields. ~\n" << std::endl;
		return;
	}
	phone_book_[next_idx_].SetDarkestSecret(str);

	phone_book_[next_idx_].SetMyIdx(next_idx_);
	SetNextIdx();
	SetSize();
}

void	PhoneBook::Search() const {
	int	idx = -1;

	std::cout << "Search: Input an integer number between 0 and 7" << std::endl;

	if (size_ == 0)
		std::cout << "( PhoneBook is empty )" << std::endl;
	else if (size_ < 8)
		std::cout << "( You can search between 0 to " << next_idx_ - 1 << " )" << std::endl;
	else
		std::cout << "( You can search between 0 to 7 )" << std::endl; 

	std::cout << "==> " << std::endl;
	std::cin >> idx;
	std::cout << std::endl;

	if (std::cin.eof() == true)
		return;
	if (std::cin.fail() == true) {
		std::cout << "~ Error: Index is wrong ~\n" << std::endl;
		std::cin.clear();
		std::cin.ignore(LLONG_MAX, '\n');
		return;
	}
	if (idx < 0 || idx > 7) {
		std::cout << "~ Error: Index is out of range ~\n" << std::endl;
		return;
	}
	if (idx >= size_) {
		std::cout << "~ Error: It's not a saved index! ~\n" << std::endl;
		return;
	}	
	std::cout
	<< "---------------------------------------------" << std::endl
	<< "|"
	<< std::setw(10) << std::right << "index" << "|"
	<< std::setw(10) << std::right << "first name" << "|"
	<< std::setw(10) << std::right << "last name" << "|"
	<< std::setw(10) << std::right << "nickname" << "|" << std::endl
	<< "---------------------------------------------" << std::endl;
	

	std::cout << "|"
	<< std::setw(10) << std::right << phone_book_[idx].GetMyIdx() << "|";

	if (phone_book_[idx].GetFirstName().size() > 10) {
		for (int i = 0; i < 9; ++i)
			std::cout << phone_book_[idx].GetFirstName().at(i);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << std::right << phone_book_[idx].GetFirstName();
	std::cout << "|";

	if (phone_book_[idx].GetLastName().size() > 10) {
		for (int i = 0; i < 9; ++i)
			std::cout << phone_book_[idx].GetLastName().at(i);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << std::right << phone_book_[idx].GetLastName();
	std::cout << "|";

	if (phone_book_[idx].GetNickname().size() > 10) {
		for (int i = 0; i < 9; ++i)
			std::cout << phone_book_[idx].GetNickname().at(i);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << std::right << phone_book_[idx].GetNickname();
	std::cout << "|";

	std::cout << std::endl
	<< "---------------------------------------------" << std::endl;
}
