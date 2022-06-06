
#pragma once
#include <string.h>
#include <iostream>
#include "Form.hpp"

class Form;

class Erreur : public std::exception
{
	public:
		Erreur(std::string const& phrase="") throw()
			:m_phrase(phrase)
		{}
		virtual const char* what() const throw()
		{
			return m_phrase.c_str();
		}
		virtual ~Erreur() throw()
		{}
	private:
		std::string m_phrase;
};

class Bureaucrat
{
	private :
		int _grade;
		std::string _name;
	public :
		Bureaucrat(int, std::string);
		~Bureaucrat(){};
		Bureaucrat &operator++(int);
		Bureaucrat &operator--(int);
		int getGrade() const;
		std::string getName() const;
		void GradeTooHighException();
		void GradeTooLowException();
		void signForm(Form *copyForm);
};

std::ostream &operator<<(std::ostream& flow, Bureaucrat const &copy);
