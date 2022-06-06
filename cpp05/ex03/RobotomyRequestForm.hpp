#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <time.h>
#include <stdlib.h>

class Form;

class RobotomyRequestForm : public Form
{
	private :
		std::string _target;
	public :
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor);
};