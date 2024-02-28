#include "../include/RobotomyRequestForm.hpp"

//Orthodox Canonical Form
RobotomyRequestForm::RobotomyRequestForm(void) : \
					AForm("Default AForm", 72, 45){
	setTarget("Default Target");
}
RobotomyRequestForm::RobotomyRequestForm(const string target) : \
					AForm("Shrubbery Creation Form", 72, 45){
	setTarget(target);
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy){
	*this = copy;
}
RobotomyRequestForm::~RobotomyRequestForm(void){}
RobotomyRequestForm&	
	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		const_cast<string&>(this->_target) = other.getTarget();
	}
	return (*this);
}

//Setters and Getters
void	RobotomyRequestForm::setTarget(const string target){
	const_cast<string&>(this->_target) = target;
}
const string&	RobotomyRequestForm::getTarget(void) const{
	return (this->_target);
}

//Member functions
void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (this->getIsSıgned() == false)
	{
		cout << "The form can't be executed because ";
		throw AForm::FormNotSignedException();
	}
	else if (executor.getGrade() > this->getGradeRequiredToExecute())
	{
		cout << "The form can't be executed because ";
		throw AForm::GradeTooLowException();
	}
	srand(time(NULL));
	cout << "* some drilling noises *" << endl;
	if (rand() % 2 == 0)
	{
		cout << getTarget() << " has been robotomized succesfully" << endl;
	}
	else
	{
		cout << "Failed to robotomized " << getTarget() << endl;
	}
}

ostream&	operator<<(ostream& o, const RobotomyRequestForm& f)
{
	o << "AForm Name : " << f.getName() << " , AForm is ";
	if (f.getIsSıgned())
		o << "signed";
	else
		o << "not signed!";
	o << "\n -Required grade| to exe:" << f.getGradeRequiredToExecute() << " to sign:" << f.getGradeRequiredToSign();
	return o;
}
