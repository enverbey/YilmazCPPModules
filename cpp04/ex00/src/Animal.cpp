#include "../include/Animal.hpp"

/**************************************************************/
/*                Constructors and Destructor                 */
/*                                                            */
/*  ->Animal::Animal(): type("Animal");                       */
/*  ->Animal::Animal(std::string arg): type(arg);             */
/*  ->Animal::Animal(const Animal& copy);                     */
/*  ->Animal &Animal::operator=(const Animal& copy)           */
/*                                                            */
/*  ->Animal::~Animal();                                      */
/*                                                            */
/**************************************************************/

Animal::Animal(): type("Animal"){
	std::cout << "Animal constructor is called" << std::endl;
}

Animal::Animal(std::string arg): type(arg){
	std::cout << "Animal constructor is called" << std::endl;
}

Animal::Animal(const Animal& copy){
	*this = copy;
	std::cout << "Animal copy constructor called\n" << std::endl;
}

Animal &Animal::operator=(const Animal& copy){
	this->type = copy.type;
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal destructor called\n" << std::endl;
}

/**************************************************************/
/*                      member functions                      */
/*                                                            */
/*                                                            */
/*  ->void Animal::makeSound() const                          */
/*                                                            */
/*                                                            */
/**************************************************************/


void Animal::makeSound() const {
    std::cout << "regular animal sound\n";
}

/**************************************************************/
/*                          getter                            */
/*                                                            */
/*                                                            */
/*  ->std::string Animal::getType() const;                    */
/*                                                            */
/*                                                            */
/**************************************************************/

std::string Animal::getType() const{
	return type;
}

/**************************************************************/
/*                          setter                            */
/*                                                            */
/*                                                            */
/*  ->void	Animal::setType(std::string arg)                  */
/*                                                            */
/*                                                            */
/**************************************************************/

void	Animal::setType(std::string arg){
	this->type = arg;
}