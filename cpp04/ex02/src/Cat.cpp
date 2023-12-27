#include "../include/Cat.hpp"

/**************************************************************/
/*                Constructors and Destructor                 */
/*                                                            */
/*  ->Cat::Cat();                                             */
/*  ->Cat::Cat(const Cat& copy);                              */
/*  -Cat &Cat::operator=(const Cat& copy);                    */
/*                                                            */
/*  ->Cat::~Cat();                                            */
/*                                                            */
/**************************************************************/

Cat::Cat(){
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& copy){
    std::cout << "Cat copy constructor called\n";
    *this = copy;
}

Cat	&Cat::operator=(const Cat& copy){
	this->type = copy.type;
	this->_brain = copy._brain;
	return (*this);
}

Cat::~Cat() {
	delete _brain;
    std::cout << "Cat destructor called\n";
}

/**************************************************************/
/*                      member functions                      */
/*                                                            */
/*                                                            */
/*  ->void Cat::makeSound() const;                            */
/*                                                            */
/*                                                            */
/**************************************************************/

void	Cat::makeSound() const{
	std::cout << "meow meow\n";
}

/**************************************************************/
/*                          getter                            */
/*                                                            */
/*                                                            */
/*  ->Brain* Cat::getBrain() const;                           */
/*                                                            */
/*                                                            */
/**************************************************************/

Brain* Cat::getBrain() const{
	return _brain;
}