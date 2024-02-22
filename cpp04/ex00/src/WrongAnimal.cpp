#include "../include/WrongAnimal.hpp"

//Orthodox Canonical Form
WrongAnimal::WrongAnimal(void): type("DefaultWrongAnimal"){
	cout << "WrongAnimal Default constructor is called" << endl;
}
WrongAnimal::WrongAnimal(const string _type) : type(_type){
	cout << "WrongAnimal Constructor is called" << endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy){
	*this = copy;
	cout << "WrongAnimal Copy constructor is called" << endl;
}
WrongAnimal::~WrongAnimal(void){
	cout << "WrongAnimal destructor is called" << endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy){
	if (this != &copy)
	{
		setType(copy.getType());
	}
	return (*this);
}

//Setters and Getters
void	WrongAnimal::setType(const string type){
	this->type = type;
}
string	WrongAnimal::getType(void) const{
	return this->type;
}

//Member functions
void	WrongAnimal::makeSound() const{
	cout << "WrongAnimal sound !! " << endl;
}
