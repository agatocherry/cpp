#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	Bureaucrat boss(1, "Boss");
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	boss.signForm(rrf);
	boss.executeForm(*rrf);
	std::cout << *rrf;
	return (0);
}
