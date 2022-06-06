#include "PresidentialPardonForm.hpp"

class Form;

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	this->setSigned(1);
}
