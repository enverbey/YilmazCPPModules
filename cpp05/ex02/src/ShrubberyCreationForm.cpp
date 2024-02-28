#include "../include/ShrubberyCreationForm.hpp"

//Orthodox Canonical Form
ShrubberyCreationForm::ShrubberyCreationForm(void) : \
					AForm("Default AForm", 145, 137){
	setTarget("Default Target");
}
ShrubberyCreationForm::ShrubberyCreationForm(const string target) : \
					AForm("Shrubbery Creation Form", 145, 137){
	setTarget(target);
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy){
	*this = copy;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void){}
ShrubberyCreationForm&	
	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		const_cast<string&>(this->_target) = other.getTarget();
	}
	return (*this);
}

//Setters and Getters
void	ShrubberyCreationForm::setTarget(const string target){
	const_cast<string&>(this->_target) = target;
}
const string&	ShrubberyCreationForm::getTarget(void) const{
	return (this->_target);
}

//Member functions
void	ShrubberyCreationForm::execute(Bureaucrat const& b) const
{
	if (b.getGrade() > this->getGradeRequiredToExecute())
	{
		cout << "The form can't be executed because ";
		throw AForm::GradeTooLowException();
	}
	else if (this->getIsSıgned() == false)
	{
		cout << "The form can't be executed because ";
		throw AForm::FormNotSignedException();
	}
	ofstream out;

	out.open((getTarget() + "_shrubbery").c_str(), ofstream::in | ofstream::trunc);

	out << "      /\\      " << endl;
	out << "     /\\*\\    " << endl;
	out << "    /\\O\\*\\    " << endl;
	out << "   /*/\\/\\/\\   " << endl;
	out << "  /\\O\\/\\*\\/\\  " << endl;
	out << " /\\*\\/\\*\\/\\/\\ " << endl;
	out << "/\\O\\/\\/*/\\/O/\\" << endl;
	out << "      ||      " << endl;
	out << "      ||      " << endl;
	out << "      ||      " << endl;

	out.close();
}


ostream&	operator<<(ostream& o, const ShrubberyCreationForm& f)
{
	o << "AForm Name : " << f.getName() << " , AForm is ";
	if (f.getIsSıgned())
		o << "signed";
	else
		o << "not signed!";
	o << "\n -Required grade| to exe:" << f.getGradeRequiredToExecute() << " to sign:" << f.getGradeRequiredToSign();
	return o;
}
