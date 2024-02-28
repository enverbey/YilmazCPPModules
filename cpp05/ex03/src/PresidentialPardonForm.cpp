#include "../include/PresidentialPardonForm.hpp"

//Orthodox Canonical Form
PresidentialPardonForm::PresidentialPardonForm(void) : \
					AForm("Default AForm", 25, 5){
	setTarget("Default Target");
}
PresidentialPardonForm::PresidentialPardonForm(const string target) : \
					AForm("Shrubbery Creation Form", 25, 5){
	setTarget(target);
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy){
	*this = copy;
}
PresidentialPardonForm::~PresidentialPardonForm(void){}
PresidentialPardonForm&	
	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		const_cast<string&>(this->_target) = other.getTarget();
	}
	return (*this);
}

//Setters and Getters
void	PresidentialPardonForm::setTarget(const string target){
	const_cast<string&>(this->_target) = target;
}
const string&	PresidentialPardonForm::getTarget(void) const{
	return (this->_target);
}

//Member functions
void	PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const
{
	if (getIsSıgned() == false)
	{
		cout << "The form can't be executed because ";
		throw AForm::FormNotSignedException();
	}
	else if (bureaucrat.getGrade() > this->getGradeRequiredToExecute())
	{
		cout << "The form can't be executed because ";
		throw AForm::GradeTooLowException();
	}
	cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << endl;
}


ostream&	operator<<(ostream& o, const PresidentialPardonForm& f)
{
	o << "AForm Name : " << f.getName() << " , AForm is ";
	if (f.getIsSıgned())
		o << "signed";
	else
		o << "not signed!";
	o << "\n -Required grade| to exe:" << f.getGradeRequiredToExecute() << " to sign:" << f.getGradeRequiredToSign();
	return o;
}
