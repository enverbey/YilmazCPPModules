#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(){}

/**************************************************************/
/*                Constructors and Destructor                 */
/*                                                            */
/*  ->ClapTrap::ClapTrap(std::string name);                   */
/*  ->ClapTrap::ClapTrap(const ClapTrap& copy);               */
/*  ->ClapTrap &ClapTrap::operator=(const ClapTrap& copy);    */
/*                                                            */
/*  ->ClapTrap::~ClapTrap()                                   */
/*                                                            */
/**************************************************************/

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	put_message_color("Default ClapTrap Constructor worked", YELLOW);
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	*this = copy;
	std::cout << "Copy ClapTrap Constructor worked" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy){
	this->name = copy.getName();
	this->hitPoints = copy.getHitPoints();
	this->energyPoints = copy.getEnergyPoints();
	this->attackDamage = copy.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap(){
	put_message_color("Default ClapTrap Destructor worked", RED);
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
	{
		put_message_color("ClapTrap " + getName() + " has no energy and can't even harm itself", ORANGE);
		return ;
	}
	if (energyPoints <= 0){
		put_message_color("ClapTrap " + getName() + " does not have any energy points to attack", ORANGE);
	return ;
	}
	std::stringstream ss;
	ss << getAttackDamage();
	std::string message = "ClapTrap " + getName() +" attacks " + target + ", causing " +  ss.str() + " point of damage!";
	put_message_color(message, ORANGE);
	setEnergyPoints(getEnergyPoints() - 1);
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints <= 0)
	{
		put_message_color("ClapTrap " + getName() + " id died bro :), He can't take damage", CYAN);
		return ;
	}
	if (hitPoints <= amount){
		put_message_color("ClapTrap " + getName() + " id died", PURPLE);
		setHitPoints(0);
		setEnergyPoints(0);
		return ;
	}
	std::stringstream ss;
	ss << amount;
	put_message_color("ClapTrap " + getName() + " has take " + ss.str() + " point of damage", CYAN);
	setHitPoints(getHitPoints() - amount);
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
/*                      BONUS functions                       */
/*                                                            */
/*                                                            */
/*  ->void		ClapTrap::untilDeath(ClapTrap& enemy)         */
/*                                                            */
/*                                                            */
/**************************************************************/

void		ClapTrap::untilDeath(ClapTrap& enemy){
	if (this == &enemy)
	{
		put_message_color("ClapTrap "+ getName() +" didn't wait to Azrael to kill him", GREEN);
		setHitPoints(0);
		setEnergyPoints(0);
		setAttackDamage(0);
		return ;
	}
	if (!getAttackDamage() && !enemy.getAttackDamage())
	{
		put_message_color("In all day, We can't wait that Azrael kill someone", GREEN);
		return ;
	}
	if (enemy.getHitPoints() <= getAttackDamage())
	{
		enemy.takeDamage(getAttackDamage());
		put_message_color("Oh my god!, " + getName() + " finihed only one shot", CRAZY_COLOR);
		return ;
	}
	if (getHitPoints())
	{
		attack(enemy.getName());
		enemy.takeDamage(getAttackDamage());
	}	
	if (getHitPoints() <= enemy.getAttackDamage())
	{
		takeDamage(enemy.getAttackDamage());
		put_message_color("Oh my god!, " + enemy.getName() + " finished only one shot", CRAZY_COLOR);
		return ;
	}
	while (getHitPoints() && enemy.getHitPoints())
	{
		//Enemy attack
		if (enemy.getHitPoints())
		{
			enemy.attack(getName());
			takeDamage(enemy.getAttackDamage());
		}

		//Main obje attack
		if (getHitPoints())
		{
			attack(enemy.getName());
			enemy.takeDamage(getAttackDamage());
		}

		if (!getEnergyPoints() && !enemy.getEnergyPoints())
		{
			put_message_color("They were like a child, their energy is gone quickly", GREEN);
			return ;
		}
	}
}

void	ClapTrap::put_message_color(std::string str, std::string color)
{
	std::cout << color << str << "\n" << END_COLOR;
}

/**************************************************************/
/*                      setters                               */
/*                                                            */
/*                                                            */
/*  ->void	ClapTrap::setHitPoints(int arg)                   */
/*  ->void	ClapTrap::setEnergyPoints(int arg)                */
/*  ->void	ClapTrap::setAttackDamage(int arg)                */
/*                                                            */
/*                                                            */
/**************************************************************/

void	ClapTrap::setHitPoints(unsigned int arg){
	this->hitPoints = arg;
}

void	ClapTrap::setEnergyPoints(unsigned int arg){
	this->energyPoints = arg;
}

void	ClapTrap::setAttackDamage(unsigned int arg){
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