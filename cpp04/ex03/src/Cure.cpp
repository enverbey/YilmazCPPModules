#include "../include/Cure.hpp"

Cure::Cure(void)
{
	setType("cure");
}

Cure::Cure(const Cure& copy)
{
	*this = copy;
}

Cure::~Cure(void){}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		this->type = other.getType();
	return (*this);
}

void	Cure::use(ICharacter& target)
{
	cout << "* heals " << target.getName() << "\'s wounds *" << endl;
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}
