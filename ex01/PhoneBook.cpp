#include <iomanip>
#include "PhoneBook.hpp"

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
		if (std::cin.eof() == true)
			return;
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	phone_book_[next_idx_].SetFirstName(str);

	do {
		std::cout << "* Last name *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof() == true)
			return;
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	phone_book_[next_idx_].SetLastName(str);

	do {
		std::cout << "* Nickname *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof() == true)
			return;
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	phone_book_[next_idx_].SetNickname(str);

	do {
		std::cout << "* Phone number *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof() == true)
			return;
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	phone_book_[next_idx_].SetPhoneNumber(str);

	do {
		std::cout << "* Darkest secret *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof() == true)
			return;
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	phone_book_[next_idx_].SetDarkestSecret(str);

	phone_book_[next_idx_].SetMyIdx(next_idx_);
	SetNextIdx();
	SetSize();
}

void	PhoneBook::Search() const {
	int	idx = -1;

	if (size_ == 0) {
		std::cout << "( PhoneBook is empty )\n" << std::endl;
		return;
	}
	else {
		std::cout
		<< "---------------------------------------------" << std::endl
		<< "|"
		<< std::setw(10) << std::right << "index" << "|"
		<< std::setw(10) << std::right << "first name" << "|"
		<< std::setw(10) << std::right << "last name" << "|"
		<< std::setw(10) << std::right << "nickname" << "|" << std::endl
		<< "---------------------------------------------" << std::endl;
		for (int i = 0; size_ < 8 ? i < next_idx_ : i < 8; ++i) {
			phone_book_[i].DisplayOneContact();
		}
	}

	std::cout << "Search: Input an integer number between 0 and 7" << std::endl;

	if (size_ < 8)
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

	std::cin.ignore(LLONG_MAX, '\n');

	if (idx < 0 || idx > 7) {
		std::cout << "~ Error: Index is out of range ~\n" << std::endl;
		return;
	}
	if (idx >= size_) {
		std::cout << "~ Error: It's not a saved index! ~\n" << std::endl;
		return;
	}	

	std::cout << std::setw(16) << "Index: " << phone_book_[idx].GetMyIdx() << std::endl;
	std::cout << std::setw(16) << "First name: " << phone_book_[idx].GetFirstName() << std::endl;
	std::cout << std::setw(16) << "Last name: " << phone_book_[idx].GetLastName() << std::endl;
	std::cout << std::setw(16) << "Nickname: " << phone_book_[idx].GetNickname() << std::endl;
	std::cout << std::setw(16) << "Phone number: " << phone_book_[idx].GetPhoneNumber() << std::endl;
	std::cout << std::setw(16) << "Darkest secret: " << phone_book_[idx].GetDarkestSecret() << std::endl;
	std::cout << std::endl;
}
