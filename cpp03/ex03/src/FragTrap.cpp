#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){}

/**************************************************************/
/*                Constructors and Destructor                 */
/*                                                            */
/*  ->FragTrap::FragTrap(std::string name): ClapTrap(name)    */
/*  ->FragTrap::FragTrap(const FragTrap& copy)                *///->  COPY
/*  ->FragTrap &FragTrap::operator=(const FragTrap& copy)     *///->  = 
/*                                                            */
/*  ->FragTrap::~FragTrap()                                   */
/*                                                            */
/**************************************************************/


FragTrap::FragTrap(std::string name): ClapTrap(name){
	this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy){
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap& copy){
	this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called\n";
}

/**************************************************************/
/*                      member functions                      */
/*                                                            */
/*                                                            */
/*  ->void    FragTrap::highFivesGuys()                       */
/*                                                            */
/*                                                            */
/**************************************************************/

void    FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->getName() << " want's to high five\n";
}

