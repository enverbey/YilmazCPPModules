#include "../include/Animal.hpp"

//Orthodox Canonical Form
Animal::Animal(void): type("DefaultAnimal"){
	cout << "Animal Default constructor is called" << endl;
}
Animal::Animal(const string _type) : type(_type){
	cout << "Animal Constructor is called" << endl;
}
Animal::Animal(const Animal& copy){
	*this = copy;
	cout << "Animal Copy constructor is called" << endl;
}
Animal::~Animal(void){
	cout << "Animal destructor is called" << endl;
}
Animal& Animal::operator=(const Animal& copy){
	if (this != &copy)
	{
		setType(copy.getType());
	}
	return (*this);
}

//Setters and Getters
void	Animal::setType(const string type){
	this->type = type;
}
string	Animal::getType(void) const{
	return this->type;
}

//Member functions
void	Animal::makeSound() const{
	cout << "Animal sound !! " << endl;
}
