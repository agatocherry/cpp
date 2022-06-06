#include "Form.hpp"

Form::Form(std::string name, int signedGrade, int executeGrade)
	: _name(name), _signedGrade(signedGrade), _executeGrade(executeGrade)
{
	try
	{
		if (signedGrade > 150)
			GradeTooLowException();
		if (signedGrade < 0)
			GradeTooHighException();
		if (executeGrade > 150)
			GradeTooLowException();
		if (executeGrade < 0)
			GradeTooHighException();
		this->_signed = false;
	}
	catch(std::exception const& e)
	{
		std::cerr << "Erreur : " << e.what() << std::endl;
	}
}

void Form::GradeTooHighException() const
{
	throw Erreur("Grade too high");
}

void Form::GradeTooLowException() const
{
	throw Erreur("Grade too low");
}

void Form::NotSignedException() const
{
	throw Erreur("Not signed");
}

bool Form::getSigned() const
{
	return(this->_signed);
}

int Form::getSignedGrade() const
{
	return (this->_signedGrade);
}

int Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

std::string Form::getName() const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream& flow, Form const &copy)
{
	std::cout << copy.getName();
	if (copy.getSigned() == 1)
		std::cout << " is signed.";
	else if (copy.getSigned() == 0)
		std::cout << " is not signed.";
	std::cout << " (Signed grade is " << copy.getSignedGrade() << " and execute grade is " << copy.getExecuteGrade() << ")" << std::endl;
	return(flow);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() <= this->getSignedGrade())
		{
			_signed = true;
		}
		else
			GradeTooLowException();
	}
	catch(std::exception const& e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
}

void Form::setSigned(bool n)
{
	this->_signed = n;
}

void Form::beforeExecute(Bureaucrat const & executor)
{
	try
	{
		if (this->getSigned() == false)
		{
			NotSignedException();
		}
		if (executor.getGrade() >= this->getExecuteGrade())
		{
			GradeTooLowException();
		}
		this->execute(executor);
	}
	catch(std::exception const& e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
}