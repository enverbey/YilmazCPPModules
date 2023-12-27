#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){}

/**************************************************************/
/*                Constructors and Destructor                 */
/*                                                            */
/*  ->ScavTrap::ScavTrap(std::string name): ClapTrap(name)    */
/*  ->ScavTrap::ScavTrap(const ScavTrap& copy)                *///->  COPY
/*  ->ScavTrap &ScavTrap::operator=(const ClapTrap& copy)     *///->  = 
/*                                                            */
/*  ->ClapTrap::~ClapTrap()                                   */
/*                                                            */
/**************************************************************/

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
	std::cout << "ScavTrap costructor worked\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy){
	*this = copy;
	std::cout << "ScavTrap copy costructor worked\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap& copy){
	this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called\n";
}

/**************************************************************/
/*                      member functions                      */
/*                                                            */
/*                                                            */
/*  ->void ScavTrap::attack(const std::string& target)       */
/*  ->void ScavTrap::guardGate()                              */
/*                                                            */
/*                                                            */
/**************************************************************/

void	ScavTrap::attack(const std::string& target){
	if (this->getHitPoints() <= 0)
		return ;
	if (this->getEnergyPoints() <= 0){
		std::cout << "ScavTrap " << this->getName() << " does not have any energy points to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target;
	std::cout << ", causing " << this->getAttackDamage() << " point of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void	ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->getName() << " is now Gate Keeper Mode\n";
}