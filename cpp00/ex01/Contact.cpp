#include "Contact.hpp"

std::string Contact::getName()const
{
	return (name);
}

std::string Contact::getLastName()const
{
	return (lastName);
}

std::string Contact::getNickname()const
{
	return (nickname);
}

std::string Contact::getPhoneNumber()const
{
	return (phoneNumber);
}

std::string Contact::getDarkestSecret()const
{
	return (darkestSecret);
}

void	Contact::setName(std::string str)
{
	this->name = str;
}

void	Contact::setLastName(std::string str)
{
	this->lastName = str;
}

void	Contact::setNickname(std::string str)
{
	this->nickname = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;;
}