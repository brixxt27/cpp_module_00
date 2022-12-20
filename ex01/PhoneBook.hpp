#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	int		GetNextIdx() const;
	void	SetNextIdx();
	int		GetSize() const;
	void	SetSize();
	void	Add();
	void	Search() const;

private:
	Contact phone_book_[8];
	int		next_idx_;
	int		size_;
};

#endif
