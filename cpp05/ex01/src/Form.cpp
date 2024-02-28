#include "../include/Form.hpp"

//Orthodox Canonical Form
Form::~Form(void){}
Form::Form(): name("Default Form"), isSigned(false), \
			__GradeRequiredToSign__(__LOW__), \
			__GradeRequiredToExecute__(__LOW__){}
Form::Form(const string& _name): \
			name(_name), \
			isSigned(false), \
			__GradeRequiredToSign__(__LOW__), \
			__GradeRequiredToExecute__(__LOW__){}
Form::Form(const string& _name, \
	const int& _GradeRequiredToSign_, \
	const int& _GradeRequiredToExecute_): \
	name(_name), \
	__GradeRequiredToSign__(_GradeRequiredToSign_),
	__GradeRequiredToExecute__(_GradeRequiredToExecute_){}
Form::Form(const Form& copy): \
			name(copy.getName()), \
			isSigned(copy.getIsSıgned()), \
			__GradeRequiredToSign__(copy.getGradeRequiredToSign()), \
			__GradeRequiredToExecute__(copy.getGradeRequiredToExecute()){}
Form& Form::operator=(const Form& copy){
	if (this != &copy)
	{
		const_cast<string&>(this->name) = copy.getName();
		this->isSigned = copy.getIsSıgned();
		const_cast<int&>(this->__GradeRequiredToSign__) = copy.getGradeRequiredToSign();
		const_cast<int&>(this->__GradeRequiredToExecute__) = copy.getGradeRequiredToExecute();
	}
	return (*this);
}

//getters
const string& Form::getName() const{
	return this->name;
}
const bool&   Form::getIsSıgned() const{
	return this->isSigned;
}
const int&    Form::getGradeRequiredToSign() const{
	return this->__GradeRequiredToSign__;
}
const int&    Form::getGradeRequiredToExecute() const{
	return this->__GradeRequiredToExecute__;
}

//setter
void	Form::setName(const string& _name){
	const_cast<string&>(this->name) = _name;
}

//Member functions
void Form::beSigned(Bureaucrat& b){
	if (b.getGrade() > this->__GradeRequiredToSign__)
		throw GradeTooLowException();
	cout << b.getName() << " signed " << this->getName() << endl;
	this->isSigned = true;
}

//exception classes
const char* Form::GradeTooHighException::what() const throw(){
	return ("Form Exception: Grade is too high!");
}
const char* Form::GradeTooLowException::what() const throw(){
	return ("Form Exception: Grade is too low!");
}

//
ostream&	operator<<(ostream& o, Form& f){
	o << "Form Name : " << f.getName() << " , Form is ";
	if (f.getIsSıgned())
		o << "signed";
	else
		o << "not signed!";
	return o;
}