#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
protected:
	std::string type;
public:
	//constructor and destructor
	Animal();
	Animal(std::string arg);
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual ~Animal();
	
	//member funciton
	virtual void	makeSound() const;
	
	//getter
	std::string		getType() const;

	//setter
	void			setType(std::string arg);
};


#endif