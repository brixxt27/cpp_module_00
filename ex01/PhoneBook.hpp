#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
public:
	void	Add();
	void	Search() const;

private:
	Contact phoneBook_[8];
};

#endif
