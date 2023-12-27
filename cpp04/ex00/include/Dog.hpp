#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal{
public:
	//constructor and destructor
	Dog();
	Dog(const Dog& copy);
	Dog &operator=(const Dog& copy);
	~Dog();

	//member funciton
	void makeSound() const;
};

#endif