#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal{
public:
	//constructor and destructor
	Cat();
	Cat(const Cat& copy);
	Cat &operator=(const Cat& copy);
	~Cat();
	
	//member funciton
	void makeSound() const;
};

#endif