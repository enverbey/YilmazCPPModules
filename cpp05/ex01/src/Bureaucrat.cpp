#include "../include/Bureaucrat.hpp"

//Orthodox Canonical Form
Bureaucrat::~Bureaucrat(){
}
Bureaucrat::Bureaucrat(){
	setName("Default");
	setGrade(150);
}
Bureaucrat::Bureaucrat(const string name, const int grade){
	setName(name);
	setGrade(grade);
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy){
	*this = copy;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy){
	setName(copy.getName());
	setGrade(copy.getGrade());
	return (*this);
}

//Member functions
void	Bureaucrat::incrementGrade(void){
	if (this->grade - 1 < __HIGH__)
		throw GradeTooHighException();
	this->grade--;
}
void	Bureaucrat::incrementGrade(const int promotion){
	if (this->grade - promotion < __HIGH__)
		throw GradeTooHighException();
	this->grade -= promotion;
}
void	Bureaucrat::decrementGrade(void){
	if (this->grade + 1 > __LOW__)
		throw GradeTooLowException();
	this->grade++;
}
void	Bureaucrat::decrementGrade(const int demotion){
	if (this->grade + demotion > __LOW__)
		throw GradeTooLowException();
	this->grade += demotion;
}

//Form functions
void	Bureaucrat::signForm(Form& f){
	f.beSigned(*this);
}

//Getters
const string& Bureaucrat::getName()const{
	return (this->name);
}
const int&    Bureaucrat::getGrade() const{
	return (this->grade);
}
void	Bureaucrat::setName(const string name){
	const_cast<string&>(this->name) = name;
}
void	Bureaucrat::setGrade(const int grade){
	if (__LOW__ < grade)
		throw GradeTooLowException();
	if (grade < __HIGH__)
		throw GradeTooHighException();
	this->grade = grade;
}

//Member functions
const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Exception: Grade is too high!");
}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Exception: Grade is too low!");
}

//output overloading function
ostream& operator<<(ostream& o, const Bureaucrat& b){
	return ((o << "Bureaucrat name: " << b.getName() << ", grade: " << b.getGrade() << ". "), o);
}
