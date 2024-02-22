#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal{
public:
	//Orthodox Canonical Form
	Dog(void);
	Dog(const Dog& copy);
	Dog& operator=(const Dog& copy);
	~Dog(void);

	//Member function
	void makeSound(void) const;
};

#endif
