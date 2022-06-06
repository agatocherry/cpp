
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact repertory[8];
		int		i;
		int		size;
		void	inputInfo();
	public:
		PhoneBook();
		void	add();
		void	search();
};

#endif