#include "../include/WrongCat.hpp"

//Orthodox Canonical Form
WrongCat::WrongCat(void){
	setType("WrongCat");
	cout << "WrongCat constructor is called" << endl;
}
WrongCat::WrongCat(const WrongCat& copy){
	cout << "WrongCat Copy constructor is called" << endl;
	*this = copy;
}
WrongCat& WrongCat::operator=(const WrongCat& copy){
	if (this != &copy)
	{
		setType(copy.getType());
	}
	return (*this);
}
WrongCat::~WrongCat(void){
	cout << "WrongCat destructor is called" << endl;
}

//Member function
void WrongCat::makeSound() const{
	cout << "Wrong Miyavv Miyavv" << endl;
}