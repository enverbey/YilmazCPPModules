#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){}

/**************************************************************/
/*                Constructors and Destructor                 */
/*                                                            */
/*  ->DiamondTrap::DiamondTrap(std::string argName)           */
/*  ->DiamondTrap::DiamondTrap(const DiamondTrap& copy)       */
/*  ->DiamondTrap &operator=(const DiamondTrap& copy);        */
/*                                                            */
/*  ->DiamondTrap::~DiamondTrap()                             */
/*                                                            */
/**************************************************************/

DiamondTrap::DiamondTrap(std::string argName): ClapTrap(argName + "_clap_name"), ScavTrap(argName), FragTrap(argName){
	this->name = argName;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
	std::cout << "DiamondTrap constructor worked" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy){
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& copy){
	this->name = copy.getDiamondName();
	setName(copy.getName());
	setAttackDamage(copy.getAttackDamage());
	setHitPoints(copy.getHitPoints());
	setEnergyPoints(copy.getEnergyPoints());
	std::cout << "Copy Constructor worked" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Destructor worked" << std::endl;
}

/**************************************************************/
/*                      member functions                      */
/*                                                            */
/*                                                            */
/*  ->void	DiamondTrap::whoAmI()                             */
/*  ->void	DiamondTrap::attack(std::string target)           */
/*                                                            */
/*                                                            */
/**************************************************************/

void	DiamondTrap::whoAmI(){
	//fuck is not a swear word
	//fuck : fornication under control of the king
	std::cout << "Hello my name is " << getDiamondName() << ", and my fucking Clap Name is " << getName() << std::endl;
}

void	DiamondTrap::attack(std::string target){
	ScavTrap::attack(target);
}


/**************************************************************/
/*                          setter                            */
/*                                                            */
/*                                                            */
/*  ->void	setDiamondName(std::string argName)               */
/*                                                            */
/*                                                            */
/**************************************************************/

void	DiamondTrap::setDiamondName(std::string argName){
	this->name = argName;
}

/**************************************************************/
/*                          getter                            */
/*                                                            */
/*                                                            */
/*  ->void	setDiamondName(std::string argName)               */
/*                                                            */
/*                                                            */
/**************************************************************/

std::string	DiamondTrap::getDiamondName(void) const{
	return name;
}
