#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	int		GetIdx() const;
	void	SetIdx();
	void	Add();
	void	Search() const;
	Contact	GetPhoneBook(int idx_) const;

private:
	Contact phone_book_[8];
	int		idx_;
};

#endif
