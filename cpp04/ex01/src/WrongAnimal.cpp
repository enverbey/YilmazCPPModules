#include "../include/WrongAnimal.hpp"

/*******************************************************************/
/*                Constructors and Destructor                      */
/*                                                                 */
/*  ->WrongAnimal::WrongAnimal(): type("WrongAnimal");             */
/*  ->WrongAnimal::WrongAnimal(std::string arg);                   */
/*  ->WrongAnimal::WrongAnimal(const WrongAnimal& copy)            */
/*  ->WrongAnimal &WrongAnimal::operator=(const WrongAnimal& copy) */
/*                                                                 */
/*  ->WrongAnimal::~WrongAnimal();                                 */
/*                                                                 */
/*******************************************************************/

WrongAnimal::WrongAnimal(): type("WrongAnimal"){
	std::cout << "WrongAnimal constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string arg): type(arg){
	std::cout << "WrongAnimal constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
	*this = copy;
	std::cout << "WrongAnimal copy constructor called\n" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& copy){
	this->type = copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called\n" << std::endl;
}

/**************************************************************/
/*                      member functions                      */
/*                                                            */
/*                                                            */
/*  ->void WrongAnimal::makeSound() const;                    */
/*                                                            */
/*                                                            */
/**************************************************************/

void WrongAnimal::makeSound() const {
    std::cout << "regular WrongAnimal sound\n";
}

/**************************************************************/
/*                          getter                            */
/*                                                            */
/*                                                            */
/*  ->std::string WrongAnimal::getType() const;               */
/*                                                            */
/*                                                            */
/**************************************************************/

std::string WrongAnimal::getType() const{
	return type;
}

/**************************************************************/
/*                          setter                            */
/*                                                            */
/*                                                            */
/*  ->void	WrongAnimal::setType(std::string arg)             */
/*                                                            */
/*                                                            */
/**************************************************************/

void	WrongAnimal::setType(std::string arg){
	this->type = arg;
}