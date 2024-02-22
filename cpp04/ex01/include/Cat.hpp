#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
public:
	//Orthodox Canonical Form
	Cat(void);
	Cat(string idea);
	Cat(const Cat& copy);
	Cat& operator=(const Cat& copy);
	~Cat(void);

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
