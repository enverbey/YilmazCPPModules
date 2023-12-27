#include "../include/ClapTrap.hpp"

/**************************************************************/
/*                Constructors and Destructor                 */
/*                                                            */
/*  ->ClapTrap::ClapTrap(std::string arg);                    */
/*  ->ClapTrap::ClapTrap(const ClapTrap& copy);               */
/*  ->ClapTrap &ClapTrap::operator=(const ClapTrap& copy);    */
/*                                                            */
/*  ->ClapTrap::~ClapTrap()                                   */
/*                                                            */
/**************************************************************/

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string arg){
	name = arg;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap Constructor worked" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	*this = copy;
	std::cout << "ClapTrap Copy Constructor worked" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy){
	this->name = copy.getName();
	this->hitPoints = copy.getHitPoints();
	this->energyPoints = copy.getEnergyPoints();
	this->attackDamage = copy.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor worked" << std::endl;
}

/**************************************************************/
/*                      member functions                      */
/*                                                            */
/*                                                            */
/*  ->void	ClapTrap::attack(const std::string& target)       */
/*  ->void	ClapTrap::takeDamage(unsigned int amount)         */
/*  ->void	ClapTrap::beRepaired(unsigned int amount)         */
/*                                                            */
/*                                                            */
/**************************************************************/

void	ClapTrap::attack(const std::string& target){
	if (hitPoints <= 0)
		return ;
	if (energyPoints <= 0){
		std::cout << "ClapTrap " << name << " does not have any energy points to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target;
	std::cout << ", causing " << attackDamage << " point of damage!" << std::endl;
	energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints <= 0)
		return ;
	if (hitPoints <= (int)amount){
		std::cout << "ClapTrap " << name << " id died" << std::endl;
		hitPoints -= amount;
		return ;
	}
	std::cout << "ClapTrap " << name << " has take " << amount << " point of damage" << std::endl;
	hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->hitPoints <= 0)
        return ;
    if (this->energyPoints <= 0) {
        std::cout << "ClapTrap " << this->getName() << "does not have any energy points to repair itself\n";
        return ;
    }
    std::cout << "ClapTrap " << this->getName() << " has repaired " << amount << " point of itself\n";
    this->energyPoints--;
    this->hitPoints += amount;
}

/**************************************************************/
/*                      setters                               */
/*                                                            */
/*                                                            */
/*  ->void	ClapTrap::setName(std::string arg)                */
/*  ->void	ClapTrap::setHitPoints(int arg)                   */
/*  ->void	ClapTrap::setEnergyPoints(int arg)                */
/*  ->void	ClapTrap::setAttackDamage(int arg)                */
/*                                                            */
/*                                                            */
/**************************************************************/

void	ClapTrap::setName(std::string arg){
	this->name = arg;
}
void	ClapTrap::setHitPoints(int arg){
	this->hitPoints = arg;
}

void	ClapTrap::setEnergyPoints(int arg){
	this->energyPoints = arg;
}

void	ClapTrap::setAttackDamage(int arg){
	this->attackDamage = arg;
}

/**************************************************************/
/*                      getters                               */
/*                                                            */
/*                                                            */
/*  ->std::string ClapTrap::getName() const                   */
/*  ->int   ClapTrap::getHitPoints() const                    */
/*  ->int   ClapTrap::getEnergyPoints() const                 */
/*  ->int   ClapTrap::getAttackDamage() const                 */
/*                                                            */
/*                                                            */
/**************************************************************/

std::string ClapTrap::getName() const{
	return name;
}

int	ClapTrap::getHitPoints() const{
	return hitPoints;
}

int	ClapTrap::getEnergyPoints() const{
	return energyPoints;
}

int	ClapTrap::getAttackDamage() const{
	return attackDamage;
}