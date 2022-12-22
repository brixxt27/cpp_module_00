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
	if (next_idx_ == PHONE_BOOK_SIZE - 1)
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

const std::string	PhoneBook::GetString(const std::string field) const {
	std::string	str = "";

	do {
		std::cout << "* " << field << " *" << std::endl;
		std::cout << "==> " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof() == true)
			return "";
		if (str != "")
			break;
		std::cout << "* Error: Enter a line that is not empty! *\n" << std::endl;
	} while (str == "");
	std::cout << std::endl;
	return str;
}

void	PhoneBook::Add() {
	const std::string	fields[5] = {
		"First name",
		"Last name",
		"Nickname",
		"Phone number",
		"Darkest secret"
	};

	std::cout << "< This contact's index is " << next_idx_ << " >" << std::endl;

	
	phone_book_[next_idx_].SetFirstName(GetString(fields[Contact::FIRST_NAME]));
	phone_book_[next_idx_].SetLastName(GetString(fields[Contact::LAST_NAME]));
	phone_book_[next_idx_].SetNickname(GetString(fields[Contact::NICKNAME]));
	phone_book_[next_idx_].SetPhoneNumber(GetString(fields[Contact::PHONE_NUMBER]));
	phone_book_[next_idx_].SetDarkestSecret(GetString(fields[Contact::DARKEST_SECRET]));

	if (phone_book_[next_idx_].GetFirstName().empty() 
		|| phone_book_[next_idx_].GetLastName().empty()
		|| phone_book_[next_idx_].GetNickname().empty()
		|| phone_book_[next_idx_].GetPhoneNumber().empty()
		|| phone_book_[next_idx_].GetDarkestSecret().empty())
		return;

	phone_book_[next_idx_].SetMyIdx(next_idx_);
	SetNextIdx();
	SetSize();
}

void	PhoneBook::Search() const {
	std::string	idx = "";

	if (size_ == 0) {
		std::cout << "( PhoneBook is empty )\n" << std::endl;
		return;
	}
	else {
		std::cout
		<< "---------------------------------------------" << std::endl
		<< "|"
		<< std::setw(PRINT_WIDTH) << std::right << "index" << "|"
		<< std::setw(PRINT_WIDTH) << std::right << "first name" << "|"
		<< std::setw(PRINT_WIDTH) << std::right << "last name" << "|"
		<< std::setw(PRINT_WIDTH) << std::right << "nickname" << "|" << std::endl
		<< "---------------------------------------------" << std::endl;
		for (int i = 0; size_ < PHONE_BOOK_SIZE ? i < next_idx_ : i < PHONE_BOOK_SIZE; ++i) {
			phone_book_[i].DisplayOneContact();
		}
	}

	std::cout << "Search: Input an integer number between 0 and 7" << std::endl;

	if (size_ < PHONE_BOOK_SIZE)
		std::cout << "( You can search between 0 to " << next_idx_ - 1 << " )" << std::endl;
	else
		std::cout << "( You can search between 0 to 7 )" << std::endl; 

	std::cout << "==> " << std::endl;

	std::getline(std::cin, idx);

	std::cout << std::endl;

	if (std::cin.eof() == true)
		return;
	if (idx.size() != 1 || idx < "0" || idx > "7") {
		std::cout << "~ Error: Index is out of range or wrong ~\n" << std::endl;
		return;
	}
	if (idx[0] >= size_ + '0') {
		std::cout << "~ Error: It's not a saved index! ~\n" << std::endl;
		return;
	}	

	std::cout << std::setw(MAX_FIELD_WIDTH) << "Index: " << phone_book_[idx[0] - '0'].GetMyIdx() << std::endl;
	std::cout << std::setw(MAX_FIELD_WIDTH) << "First name: " << phone_book_[idx[0] - '0'].GetFirstName() << std::endl;
	std::cout << std::setw(MAX_FIELD_WIDTH) << "Last name: " << phone_book_[idx[0] - '0'].GetLastName() << std::endl;
	std::cout << std::setw(MAX_FIELD_WIDTH) << "Nickname: " << phone_book_[idx[0] - '0'].GetNickname() << std::endl;
	std::cout << std::setw(MAX_FIELD_WIDTH) << "Phone number: " << phone_book_[idx[0] - '0'].GetPhoneNumber() << std::endl;
	std::cout << std::setw(MAX_FIELD_WIDTH) << "Darkest secret: " << phone_book_[idx[0] - '0'].GetDarkestSecret() << std::endl;
	std::cout << std::endl;
}
