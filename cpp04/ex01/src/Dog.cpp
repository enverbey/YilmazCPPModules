#include "../include/Dog.hpp"

//Orthodox Canonical Form
Dog::Dog(void){
	setType("Dog");
	this->_brain = new Brain();
	cout << "Dog constructor is called" << endl;
}
Dog::Dog(string idea){
	this->_brain = new Brain(idea);
	setType("Dog");
	cout << "Dog constructor is called" << endl;
}
Dog::Dog(const Dog& copy){
	cout << "Dog Copy constructor is called" << endl;
	this->_brain = new Brain(copy.getBrain());
	setType("Dog");
}
Dog& Dog::operator=(const Dog& copy){
	cout << "Dog operator is called " << endl;
	if (this != &copy)
	{
		*this->_brain = copy.getBrain();
		setType(copy.getType());
	}
	return (*this);
}
Dog::~Dog(void){
	delete this->_brain;
	cout << "Dog destructor is called" << endl;
}

//Setters and Getters
void	Dog::setBrain(const string idea){
	delete this->_brain;
	this->_brain = new Brain(idea);
}
void	Dog::setBrain(const Brain& brain){
	delete this->_brain;
	this->_brain = new Brain(brain);
}
const Brain& Dog::getBrain(void) const{
	return (*this->_brain);
}

//Member function
void Dog::makeSound() const{
	cout << "Houv Houv" << endl;
}

