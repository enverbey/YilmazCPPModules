#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{
private:
	Brain* _brain;
public:
	//constructor and destructor
	Dog();
	Dog(const Dog& copy);
	Dog &operator=(const Dog& copy);
	~Dog();

	//member funciton
	void makeSound() const;

	//getter
	Brain* getBrain() const;
};

#endif