#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
public:
	Contact();
	void	SetMyIdx(const int idx);
	void	SetFirstName(const std::string& first_name);
	void	SetLastName(const std::string& last_name);
	void	SetNickname(const std::string& nick_name);
	void	SetPhoneNumber(const std::string& phone_number);
	void	SetDarkestSecret(const std::string& darkest_secret);

	const int&			GetMyIdx() const;
	const std::string&	GetFirstName() const;
	const std::string&	GetLastName() const;
	const std::string&	GetNickname() const;
	const std::string&	GetPhoneNumber() const;
	const std::string&	GetDarkestSecret() const;

	void	DisplayOneContact() const;

private:
	int			my_idx_;
	std::string	first_name_;
	std::string	last_name_;
	std::string	nickname_;
	std::string	phone_number_;
	std::string	darkest_secret_;
};

#endif
