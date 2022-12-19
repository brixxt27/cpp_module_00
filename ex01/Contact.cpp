#include "Contact.hpp"

Contact::Contact()
: first_name_("")
, last_name_("")
, nickname_("")
, phone_number_("")
, darkest_secret_("")
{}

void	Contact::SetMyIdx(int idx) {
	my_idx_ = idx;
}

void	Contact::SetFirstName(std::string& first_name) {
	first_name_ = first_name;
}

void	Contact::SetLastName(std::string& last_name) {
	last_name_ = last_name;
}

void	Contact::SetNickname(std::string& nickname) {
	nickname_ = nickname;
}

void	Contact::SetPhoneNumber(std::string& phone_number) {
	phone_number_ = phone_number;
}
void	Contact::SetDarkestSecret(std::string& darkest_secret) {
	darkest_secret_ = darkest_secret;
}

int	Contact::GetMyIdx() const {
	return my_idx_;
}

std::string	Contact::GetFirstName() const {
	return first_name_;
}

std::string	Contact::GetLastName() const {
	return last_name_;
}

std::string	Contact::GetNickname() const {
	return nickname_;
}

std::string	Contact::GetPhoneNumber() const {
	return phone_number_;
}

std::string	Contact::GetDarkestSecret() const {
	return darkest_secret_;
}
