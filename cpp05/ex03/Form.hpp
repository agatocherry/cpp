#pragma once
#include "Bureaucrat.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

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
		virtual ~Form(){};
		void GradeTooHighException() const;
		void GradeTooLowException() const;
		void NotSignedException() const;
		bool getSigned() const;
		void setSigned(bool n);
		int getSignedGrade() const;
		int getExecuteGrade() const;
		std::string getName() const;
		void beSigned(Bureaucrat &bureaucrat);
		void beforeExecute(Bureaucrat const & executor);
		virtual void execute(Bureaucrat const & bureaucrat) = 0;
};

std::ostream &operator<<(std::ostream& flow, Form const &copy);
