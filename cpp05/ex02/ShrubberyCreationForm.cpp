#include "ShrubberyCreationForm.hpp"

class Form;

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	std::string fileName(_target + "_shrubbery");
	std::ofstream fd(fileName);
	if(fd)
	{
		fd << "                %%//\n            ((     (  %%     %   /\n         //   ,  &( &   //   %% ((  %\n           /%%  &  %%((//   (  %%  / ((\n "
		<< "          ((   &/  %&  %    & &  ((( (%% /\n       %%  (( ,   .     //  %%  & (  &////%(\n        %% &   &    &(((.  (  %&((       %\n"
		<< "         (( // % & &  /&%%  ( &&(   % &/////\n  %%/   %%  (*   (*&&      &&( // (%%* ( %%\n (/ /  //// &  &&&&/&&&   &      (&     %%((( (\n"
		<< "    &      ((*      *(( && %%  &  ((  &  (( (( (((\n    %    &&&&(&  %%   %% &    &  &&&&    %/&%%%%%\n    %   %% */&& (&& &   %&& &&    (( &  //  ((\n"
		<< "      (((  ((  %%%  &&   &&&  //    ((%   ((\n             (( //    &&&& &   %%% (\n                       &&&\n                       &&&\n"
		<< "                       &&&\n                       &&&\n                       &&&\n                       &&&&\n"<< std::endl;
	}
		this->setSigned(1);
}
