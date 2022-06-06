#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	try
	{
		if (grade > 150)
			GradeTooLowException();
		if (grade < 0)
			GradeTooHighException();
		this->_grade = grade;
		this->_name = name;
	}
	catch(std::exception const& e)
	{
		std::cerr << "Erreur : " << e.what() << std::endl;
	}
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

void Bureaucrat::GradeTooHighException()
{
	throw Erreur("Grade too high");
}

void Bureaucrat::GradeTooLowException()
{
	throw Erreur("Grade too low");
}

Bureaucrat &Bureaucrat::operator++(int)
{
	this->_grade--;
	return (*this);
}

Bureaucrat &Bureaucrat::operator--(int)
{
	this->_grade++;
	return (*this);
}

std::ostream &operator<<(std::ostream& flow, Bureaucrat const &bureaucratCpy)
{
	std::cout << bureaucratCpy.getName() << ", bureaucrat grade " << bureaucratCpy.getGrade() << "." << std::endl;
	return(flow);
}