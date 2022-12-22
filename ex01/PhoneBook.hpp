#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define PHONE_BOOK_SIZE 8

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
	Contact phone_book_[PHONE_BOOK_SIZE];
	int		next_idx_;
	int		size_;
	
	const std::string	GetString(const std::string field) const;
};

#endif
