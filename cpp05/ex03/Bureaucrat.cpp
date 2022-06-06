#include "Bureaucrat.hpp"

class Form;

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

void Bureaucrat::signForm(Form *copyForm)
{
	try
	{
		if (this->getGrade() > copyForm->getSignedGrade() && this->getGrade() > copyForm->getExecuteGrade())
			throw Erreur("signed grade and execute grade need a highest grade");
		if (this->getGrade() > copyForm->getExecuteGrade())
			throw Erreur("execute grade need a highest grade");
		if (this->getGrade() > copyForm->getSignedGrade())
			throw Erreur("signed grade need a highest grade");
		std::cout << this->getName() << " signs " << copyForm->getName() << std::endl;
		copyForm->setSigned(1);
	}
	catch(std::exception const& e)
	{
		std::cerr << this->getName() << " cannot sign " << copyForm->getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form & form)
{
	std::cout << _name << " executes " << form.getName() << std::endl;
	form.beforeExecute(*this);
}