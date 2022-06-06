
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream> 
# include <iomanip>

class Contact
{
	private:
		std::string	name;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		std::string getName()const;
		std::string getLastName()const;
		std::string getNickname()const;
		std::string getPhoneNumber()const;
		std::string getDarkestSecret()const;
		void setName(std::string str);
		void setLastName(std::string str);
		void setNickname(std::string str);
		void setPhoneNumber(std::string str);
		void setDarkestSecret(std::string str);
};

#endif