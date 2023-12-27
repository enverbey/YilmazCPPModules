#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
	//constructor and destructor
	WrongCat();
	WrongCat(const WrongCat& copy);
	WrongCat &operator=(const WrongCat& copy);
	~WrongCat();

	//member funciton
	void makeSound() const;
};

#endif