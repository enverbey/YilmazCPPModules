#include "../include/Dog.hpp"

/**************************************************************/
/*                Constructors and Destructor                 */
/*                                                            */
/*  ->Dog::Dog();                                             */
/*  ->Dog::Dog(const Dog& copy);                              */
/*  ->Dog   &Dog::operator=(const Dog& copy);                 */
/*                                                            */
/*  ->Dog::~Dog();                                            */
/*                                                            */
/**************************************************************/

Dog::Dog(){
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& copy){
    std::cout << "Dog copy constructor called\n";
    *this = copy;
}

Dog	&Dog::operator=(const Dog& copy){
	this->type = copy.type;
	this->_brain = copy._brain;
	return (*this);
}

Dog::~Dog(){
	delete _brain;
    std::cout << "Dog destructor called\n";
}

/**************************************************************/
/*                      member functions                      */
/*                                                            */
/*                                                            */
/*  ->void  Dog::makeSound() const;                           */
/*                                                            */
/*                                                            */
/**************************************************************/

void	Dog::makeSound() const{
	std::cout << "woof woof\n";
}

/**************************************************************/
/*                          getter                            */
/*                                                            */
/*                                                            */
/*  ->Brain* Dog::getBrain() const;                           */
/*                                                            */
/*                                                            */
/**************************************************************/

Brain* Dog::getBrain() const{
	return _brain;
}