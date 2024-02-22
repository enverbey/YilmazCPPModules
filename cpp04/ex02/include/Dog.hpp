#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
public:
	//Orthodox Canonical Form
	Dog(void);
	Dog(string idea);
	Dog(const Dog& copy);
	Dog& operator=(const Dog& copy);
	~Dog(void);

	//Setters and Getters
	void	setBrain(const string idea);
	void	setBrain(const Brain& brain);
	const Brain& getBrain() const;

	//Member function
	void makeSound(void) const;
private:
	Brain*	_brain;
};

#endif
