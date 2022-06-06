#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#define CALL_MEMBER_FN(object,ptrToMember)  ((object).*(ptrToMember))

Form *Intern::Presidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::Robotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::Shrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	InternMemFn functions[3] = { &Intern::Presidential, &Intern::Robotomy, &Intern::Shrubbery };
	std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (formName == names[i])
		{
			std::cout << "Intern creates " << formName << "." << std::endl;
			return CALL_MEMBER_FN(*this, functions[i]) (target);
		}
	}
	return (NULL);
}