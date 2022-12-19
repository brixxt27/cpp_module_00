#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
public:
	Contact();
	void		SetFirstName(std::string& first_name);
	void		SetLastName(std::string& last_name);
	void		SetNickname(std::string& nick_name);
	void		SetPhoneNumber(std::string& phone_number);
	void		SetDarkestSecret(std::string& darkest_secret);

	std::string	GetFirstName();
	std::string	GetLastName();
	std::string	GetNickname();
	std::string	GetPhoneNumber();
	std::string	GetDarkestSecret();

private:
	std::string	first_name_;
	std::string	last_name_;
	std::string	nickname_;
	std::string	phone_number_;
	std::string	darkest_secret_;
};

#endif
