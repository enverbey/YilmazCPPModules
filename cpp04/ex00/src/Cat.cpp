#include "../include/Cat.hpp"

//Orthodox Canonical Form
Cat::Cat(void){
	setType("Cat");
	cout << "Cat constructor is called" << endl;
}
Cat::Cat(const Cat& copy){
	cout << "Cat Copy constructor is called" << endl;
	*this = copy;
}
Cat& Cat::operator=(const Cat& copy){
	if (this != &copy)
	{
		setType(copy.getType());
	}
	return (*this);
}
Cat::~Cat(void){
	cout << "Cat destructor is called" << endl;
}

//Member function
void Cat::makeSound() const{
	cout << "Miyavv Miyavv" << endl;
}
