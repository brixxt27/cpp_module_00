#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	void	Add();
	void	Search() const;

private:
	Contact phoneBook_[8];
	int		idx_;
};

#endif
