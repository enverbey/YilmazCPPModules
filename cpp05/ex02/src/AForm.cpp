#include "../include/AForm.hpp"

//Orthodox Canonical Form
AForm::~AForm(void){}
AForm::AForm(): name("Default AForm"), isSigned(false), \
			__GradeRequiredToSign__(__LOW__), \
			__GradeRequiredToExecute__(__LOW__){}
AForm::AForm(const string& _name): \
			name(_name), \
			isSigned(false), \
			__GradeRequiredToSign__(__LOW__), \
			__GradeRequiredToExecute__(__LOW__){}
AForm::AForm(const string& _name, \
	const int& _GradeRequiredToSign_, \
	const int& _GradeRequiredToExecute_): \
	name(_name), \
	__GradeRequiredToSign__(_GradeRequiredToSign_),
	__GradeRequiredToExecute__(_GradeRequiredToExecute_){}
AForm::AForm(const AForm& copy): \
			name(copy.getName()), \
			isSigned(copy.getIsSıgned()), \
			__GradeRequiredToSign__(copy.getGradeRequiredToSign()), \
			__GradeRequiredToExecute__(copy.getGradeRequiredToExecute()){}
AForm& AForm::operator=(const AForm& copy){
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
const string& AForm::getName() const{
	return this->name;
}
const bool&   AForm::getIsSıgned() const{
	return this->isSigned;
}
const int&    AForm::getGradeRequiredToSign() const{
	return this->__GradeRequiredToSign__;
}
const int&    AForm::getGradeRequiredToExecute() const{
	return this->__GradeRequiredToExecute__;
}

//setter
void	AForm::setName(const string& _name){
	const_cast<string&>(this->name) = _name;
}

//Member functions
void AForm::beSigned(Bureaucrat& b){
	if (b.getGrade() > this->__GradeRequiredToSign__)
		throw GradeTooLowException();
	cout << b.getName() << " signed " << this->getName() << endl;
	this->isSigned = true;
}

//exception classes
const char* AForm::GradeTooHighException::what() const throw(){
	return ("AForm Exception: Grade is too high!");
}
const char* AForm::GradeTooLowException::what() const throw(){
	return ("AForm Exception: Grade is too low!");
}
const char* AForm::FormNotSignedException::what() const throw(){
	return ("AForm Exception: Form is not signed!!");
}

//
ostream&	operator<<(ostream& o, AForm& f){
	o << "AForm Name : " << f.getName() << " , AForm is ";
	if (f.getIsSıgned())
		o << "signed";
	else
		o << "not signed!";
	return o;
}