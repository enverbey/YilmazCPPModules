#include "../include/Character.hpp"

//Orthodox Canonical Form
Character::Character(void){
	setName("Unknown name");
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
Character::Character(const string& name){
	setName(name);
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
Character::Character(const Character& copy){
	*this = copy;
}
Character::~Character(void){
	for (int i = 0; i < 4; i++)
	{
		if (!!this->inventory[i])
			delete this->inventory[i];
	}
}
Character&	Character::operator=(const Character& other){
	if (this != &other)
	{
		this->setName(other.getName());
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return (*this);
}

//Setters and Getters
void	Character::setName(const string& name)
{
	this->name = name;
}

const string&	Character::getName(void) const
{
	return (this->name);
}

//Member functions
void	Character::equip(AMateria* m){
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			//cout << "i: " << i <<endl;
			this->inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return ;
	this->inventory[idx] = NULL;
}
void	Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3)
		return ;
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
