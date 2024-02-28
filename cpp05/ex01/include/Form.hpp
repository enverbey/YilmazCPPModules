#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;
using std::ostream;
using std::exception;

#define __HIGH__ 1
#define __LOW__ 150

class Bureaucrat;

class Form{
public:
	//Orthodox Canonical Form
	~Form(void);
	Form(void);
	Form(const string& name);
	Form(const string& name, \
	const int& _GradeRequiredToSign_, \
	const int& _GradeRequiredToExecute_);
	Form(const Form& copy);
	Form& operator=(const Form& copy);

	//getters
	const string& getName() const;
	const bool&   getIsSıgned() const;
	const int&    getGradeRequiredToSign() const;
	const int&    getGradeRequiredToExecute() const;

	//setter
	void setName(const string&);

	//Member functions
	void beSigned(Bureaucrat& b);

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
	const string	name;
	bool			isSigned;
	const int		__GradeRequiredToSign__;
	const int		__GradeRequiredToExecute__;
};
ostream&	operator<<(ostream& o, Form& f);
#endif