#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	int		GetIdx();
	void	SetIdx();
	void	Add();
	void	Search() const;
private:
	Contact phone_book_[8];
	int		idx_;
};

#endif
