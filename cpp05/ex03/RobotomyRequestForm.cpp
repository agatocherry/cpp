#include "RobotomyRequestForm.hpp"

class Form;

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	srand (time(NULL));
	if (rand() % 2)
	{
		std::cout << "Bvvvv, Bvvvv !" << std::endl;
		std::cout << _target << " has been robotomized successfully." << std::endl;
		this->setSigned(1);
	}
	else
		std::cout << _target << " does not been robotomized." << std::endl;

}
