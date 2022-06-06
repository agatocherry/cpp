
#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		const std::string	_name;
		const int			_signedGrade;
		const int			_executeGrade;
		bool				_signed;
	public :
		Form(std::string name, int signedGrade, int executeGrade);
		void GradeTooHighException();
		void GradeTooLowException();
		bool getSigned() const;
		void setSigned(bool n);
		int getSignedGrade() const;
		int getExecuteGrade() const;
		std::string getName() const;
		Form beSigned(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream& flow, Form const &copy);
