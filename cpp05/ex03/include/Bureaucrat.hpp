#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

using std::string;
using std::ostream;
using std::exception;
using std::cout;
using std::endl;
using std::cin;

#define __HIGH__ 1
#define __LOW__ 150

class AForm;

class Bureaucrat{
public:
	//Orthodox Canonical Form
	~Bureaucrat(void);
	Bureaucrat(void);
	Bureaucrat(const string name, const int grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);

	//Setters and Getters
	const string& getName() const;
	const int&    getGrade() const;
	void	setName(const string);

	//Member functions
	void	incrementGrade(void);
	void	incrementGrade(const unsigned int);
	void	decrementGrade(void);
	void	decrementGrade(const unsigned int);

	//Form functions
	void	signForm(AForm& f);
	void	executeForm(AForm const& form) const;

	//exception classes
	class GradeTooHighException : public exception{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public exception{
	public:
		virtual const char* what() const throw();
	};

private:
	const string name;
	int	grade;

	void	setGrade(const int);
};

ostream& operator<<(ostream& o, const Bureaucrat& b);

#endif