#include "../include/Cat.hpp"

//Orthodox Canonical Form
Cat::Cat(void){
	setType("Cat");
	this->_brain = new Brain();
	cout << "Cat constructor is called" << endl;
}
Cat::Cat(string idea){
	this->_brain = new Brain(idea);
	setType("Cat");
	cout << "Cat constructor is called" << endl;
}
Cat::Cat(const Cat& copy){
	cout << "Cat Copy constructor is called" << endl;
	this->_brain = new Brain(copy.getBrain());
	setType("Cat");
}
Cat& Cat::operator=(const Cat& copy){
	cout << "Cat operator is called " << endl;
	if (this != &copy)
	{
		*this->_brain = copy.getBrain();
		setType(copy.getType());
	}
	return (*this);
}
Cat::~Cat(void){
	delete this->_brain;
	cout << "Cat destructor is called" << endl;
}

//Setters and Getters
void	Cat::setBrain(const string idea){
	delete this->_brain;
	this->_brain = new Brain(idea);
}
void	Cat::setBrain(const Brain& brain){
	delete this->_brain;
	this->_brain = new Brain(brain);
}
const Brain& Cat::getBrain(void) const{
	return (*this->_brain);
}

//Member function
void Cat::makeSound() const{
	cout << "Miyavv Miyavv" << endl;
}

