#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
public:
	Contact();
	void		SetMyIdx(int idx);
	void		SetFirstName(std::string& first_name);
	void		SetLastName(std::string& last_name);
	void		SetNickname(std::string& nick_name);
	void		SetPhoneNumber(std::string& phone_number);
	void		SetDarkestSecret(std::string& darkest_secret);

	int					GetMyIdx() const;
	std::string	GetFirstName() const;
	std::string	GetLastName() const;
	std::string	GetNickname() const;
	std::string	GetPhoneNumber() const;
	std::string	GetDarkestSecret() const;

private:
	int					my_idx_;
	std::string	first_name_;
	std::string	last_name_;
	std::string	nickname_;
	std::string	phone_number_;
	std::string	darkest_secret_;
};

#endif
