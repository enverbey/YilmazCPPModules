#include "../include/Intern.hpp"

//Orthodox Canonical Form
Intern::Intern(void){}
Intern::Intern(const Intern &copy){
	*this = copy;
}
Intern::~Intern(void){
	cout << "Destructor called (Intern)" << endl;
}
Intern&	Intern::operator=(const Intern& other){
	if (this != &other)
	{}
	return (*this);
}

//Member functions
AForm*	Intern::makeForm(const string formName, const string target){
	if (formName == "shrubbery creation")
	{
		cout << "Intern creates " << formName << endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (formName == "robotomy request")
	{
		cout << "Intern creates " << formName << endl;
		return (new RobotomyRequestForm(target));
	}
	else if (formName == "presidential pardon")
	{
		cout << "Intern creates " << formName << endl;
		return (new PresidentialPardonForm(target));
	}
	else{
		cout << "Intern could not create " << formName << endl;
	}
	return (0);
}