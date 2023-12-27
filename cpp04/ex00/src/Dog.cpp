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
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& copy){
    std::cout << "Dog copy constructor called\n";
    *this = copy;
}

Dog	&Dog::operator=(const Dog& copy){
	this->type = copy.type;
	return (*this);
}

Dog::~Dog(){
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