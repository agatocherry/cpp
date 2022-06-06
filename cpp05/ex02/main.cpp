#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat boss(1, "Boss");

	ShrubberyCreationForm Shrubbery("Shrubbery");
	boss.signForm(&Shrubbery);
	boss.executeForm(Shrubbery);
	std::cout << Shrubbery;

	RobotomyRequestForm Robotomy("Robotomy");
	boss.signForm(&Robotomy);
	boss.executeForm(Robotomy);
	std::cout << Robotomy;

	PresidentialPardonForm Presidential("Presidential");
	boss.signForm(&Presidential);
	boss.executeForm(Presidential);
	std::cout << Presidential;
	return (0);
}
