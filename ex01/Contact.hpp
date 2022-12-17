#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
public:
	Contact();

private:
	std::string	first_name_;
	std::string	last_name_;
	std::string	nick_name_;
	std::string	phone_name_;
	std::string	darkest_secret_;
	// int			idx_;
};

#endif
