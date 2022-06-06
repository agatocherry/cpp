#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Form;

class ShrubberyCreationForm : public Form
{
	private :
		std::string _target;
	public :
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor);
};