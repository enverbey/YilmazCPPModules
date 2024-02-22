#include "../include/Dog.hpp"

//Orthodox Canonical Form
Dog::Dog(void){
	setType("Dog");
	cout << "Dog constructor is called" << endl;
}
Dog::Dog(const Dog& copy){
	cout << "Dog Copy constructor is called" << endl;
	*this = copy;
}
Dog& Dog::operator=(const Dog& copy){
	if (this != &copy)
	{
		setType(copy.getType());
	}
	return (*this);
}
Dog::~Dog(void){
	cout << "Dog destructor is called" << endl;
}

//Member function
void Dog::makeSound() const{
	cout << "Houv Houv" << endl;
}