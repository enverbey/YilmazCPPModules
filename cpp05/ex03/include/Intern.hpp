#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

class Intern{
public:
	//Orthodox Canonical Form
	~Intern(void);
	Intern(void);
	Intern(const Intern& copy);
	Intern& operator=(const Intern& copy);

	//Member functions
	AForm*	makeForm(const string formName, const string target);
private:

};

#endif