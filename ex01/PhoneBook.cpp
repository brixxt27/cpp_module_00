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

	std::cout << "< This contact's index is " << next_idx_ << " >" << std::endl;

	do {
		std::cout << "* First name *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	phone_book_[next_idx_].SetFirstName(str);

	do {
		std::cout << "* Last name *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	phone_book_[next_idx_].SetLastName(str);

	do {
		std::cout << "* Nickname *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	phone_book_[next_idx_].SetNickname(str);

	do {
		std::cout << "* Phone number *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
	phone_book_[next_idx_].SetPhoneNumber(str);

	do {
		std::cout << "* Darkest secret *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	if (std::cin.eof() == true)
		return;
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
