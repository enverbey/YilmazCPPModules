#include "../include/WrongCat.hpp"

/**************************************************************/
/*                Constructors and Destructor                 */
/*                                                            */
/*  ->WrongCat::WrongCat();                                   */
/*  ->WrongCat::WrongCat(const WrongCat& copy);               */
/*  -WrongCat	&WrongCat::operator=(const WrongCat& copy);   */
/*                                                            */
/*  ->WrongCat::~WrongCat();                                  */
/*                                                            */
/**************************************************************/

WrongCat::WrongCat(){
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat& copy){
    std::cout << "WrongCat copy constructor called\n";
    *this = copy;
}

WrongCat	&WrongCat::operator=(const WrongCat& copy){
	this->type = copy.type;
	return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called\n";
}

/**************************************************************/
/*                      member functions                      */
/*                                                            */
/*                                                            */
/*  ->void	WrongCat::makeSound() const;                      */
/*                                                            */
/*                                                            */
/**************************************************************/

void	WrongCat::makeSound() const{
	std::cout << "meow meow\n";
}
