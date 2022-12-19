#include "Contact.hpp"

Contact::Contact()
: first_name_("")
, last_name_("")
, nickname_("")
, phone_number_("")
, darkest_secret_("")
{}

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

std::string	Contact::GetFirstName() {
	return first_name_;
}

std::string	Contact::GetLastName() {
	return last_name_;
}

std::string	Contact::GetNickname() {
	return nickname_;
}

std::string	Contact::GetPhoneNumber() {
	return phone_number_;
}

std::string	Contact::GetDarkestSecret() {
	return darkest_secret_;
}
