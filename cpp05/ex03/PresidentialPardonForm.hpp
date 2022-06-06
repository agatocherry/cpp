#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <time.h>
#include <stdlib.h>

class Form;

class PresidentialPardonForm : public Form
{
	private :
		std::string _target;
	public :
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor);
};