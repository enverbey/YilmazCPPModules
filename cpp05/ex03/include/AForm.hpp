#ifndef AFORM_HPP
# define AFORM_HPP

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

class AForm{
public:
	//Orthodox Canonical AForm
	virtual ~AForm(void);
	AForm(void);
	AForm(const string& name);
	AForm(const string& name, \
	const int& _GradeRequiredToSign_, \
	const int& _GradeRequiredToExecute_);
	AForm(const AForm& copy);
	AForm& operator=(const AForm& copy);

	//getters
	const string& getName() const;
	const bool&   getIsSıgned() const;
	const int&    getGradeRequiredToSign() const;
	const int&    getGradeRequiredToExecute() const;

	//setter
	void setName(const string&);

	//Member functions
	void 			beSigned(Bureaucrat& b);
	virtual void	execute(Bureaucrat const& executor) const = 0;

	//exception classes
	class GradeTooHighException : public exception{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public exception{
	public:
		virtual const char* what() const throw();
	};
	class FormNotSignedException : public exception{
	public:
		virtual const char* what() const throw();
	};

private:
	const string	name;
	bool			isSigned;
	const int		__GradeRequiredToSign__;
	const int		__GradeRequiredToExecute__;
};
ostream&	operator<<(ostream& o, AForm& f);
#endif
