#include "../include/AAnimal.hpp"

//Orthodox Canonical Form
AAnimal::AAnimal(void): type("DefaultAAnimal"){
	cout << "AAnimal Default constructor is called" << endl;
}
AAnimal::AAnimal(const string _type) : type(_type){
	cout << "AAnimal Constructor is called" << endl;
}
AAnimal::AAnimal(const AAnimal& copy){
	*this = copy;
	cout << "AAnimal Copy constructor is called" << endl;
}
AAnimal::~AAnimal(void){
	cout << "AAnimal destructor is called" << endl;
}
AAnimal& AAnimal::operator=(const AAnimal& copy){
	if (this != &copy)
	{
		setType(copy.getType());
	}
	return (*this);
}

//Setters and Getters
void	AAnimal::setType(const string type){
	this->type = type;
}
string	AAnimal::getType(void) const{
	return this->type;
}
