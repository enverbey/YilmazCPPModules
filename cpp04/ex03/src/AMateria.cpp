#include "../include/AMateria.hpp"

//Orthodox Canonical Form
AMateria::AMateria(void){
	setType("Unknown type");
}
AMateria::AMateria(const string& type){
	setType(type);
}
AMateria::AMateria(const AMateria& copy){
	*this = copy;
}
AMateria::~AMateria(void){}
AMateria& AMateria::operator=(const AMateria& copy){
	if (this != &copy)
		setType(copy.getType());
	return (*this);
}

//Setters and Getters
const string& AMateria::getType(void) const{
	return (this->type);
}
void	AMateria::setType(const string type){
	this->type = type;
}

//Member functions
void AMateria::use(ICharacter& target){
	cout << "YOU WILL NEVER SEE IN TERMINAL" << endl;
}
