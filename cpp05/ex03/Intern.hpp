#include "Form.hpp"

class Form;

class Intern
{
	private:
		
	public:
		Intern(){};
		~Intern(){};
		Form *makeForm(std::string formName, std::string name);
		Form *Presidential(std::string target);
		Form *Robotomy(std::string target);
		Form *Shrubbery(std::string target);
};

typedef Form *(Intern::*InternMemFn)(std::string target);