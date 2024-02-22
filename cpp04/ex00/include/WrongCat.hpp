#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal{
public:
	//Orthodox Canonical Form
	WrongCat(void);
	WrongCat(const WrongCat& copy);
	WrongCat& operator=(const WrongCat& copy);
	~WrongCat(void);

	//Member function
	void makeSound(void) const;
};

#endif
