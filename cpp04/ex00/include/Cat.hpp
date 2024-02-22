#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"


class Cat : public Animal{
public:
	//Orthodox Canonical Form
	Cat(void);
	Cat(const Cat& copy);
	Cat& operator=(const Cat& copy);
	~Cat(void);

	//Member function
	void makeSound(void) const;
};

#endif
