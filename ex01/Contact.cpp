#include "Contact.hpp"
#include <iomanip>

Contact::Contact()
: my_idx_(-1)
, first_name_("First name")
, last_name_("Last name")
, nickname_("Nickname")
, phone_number_("Phone number")
, darkest_secret_("Darkest secret")
{}

void	Contact::SetMyIdx(const int idx) {
	my_idx_ = idx;
}

void	Contact::SetFirstName(const std::string& first_name) {
	first_name_ = first_name;
}

void	Contact::SetLastName(const std::string& last_name) {
	last_name_ = last_name;
}

void	Contact::SetNickname(const std::string& nickname) {
	nickname_ = nickname;
}

void	Contact::SetPhoneNumber(const std::string& phone_number) {
	phone_number_ = phone_number;
}
void	Contact::SetDarkestSecret(const std::string& darkest_secret) {
	darkest_secret_ = darkest_secret;
}

const int&	Contact::GetMyIdx() const {
	return my_idx_;
}

const std::string&	Contact::GetFirstName() const {
	return first_name_;
}

const std::string&	Contact::GetLastName() const {
	return last_name_;
}

const std::string&	Contact::GetNickname() const {
	return nickname_;
}

const std::string&	Contact::GetPhoneNumber() const {
	return phone_number_;
}

const std::string&	Contact::GetDarkestSecret() const {
	return darkest_secret_;
}

void	Contact::DisplayOneContact() const {
	std::cout << "|"
	<< std::setw(10) << std::right << GetMyIdx() << "|";

	if (GetFirstName().size() > 10) {
		for (int i = 0; i < 9; ++i)
			std::cout << GetFirstName().at(i);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << std::right << GetFirstName();
	std::cout << "|";

	if (GetLastName().size() > 10) {
		for (int i = 0; i < 9; ++i)
			std::cout << GetLastName().at(i);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << std::right << GetLastName();
	std::cout << "|";

	if (GetNickname().size() > 10) {
		for (int i = 0; i < 9; ++i)
			std::cout << GetNickname().at(i);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << std::right << GetNickname();
	std::cout << "|";

	std::cout << std::endl
	<< "---------------------------------------------" << std::endl;
}
