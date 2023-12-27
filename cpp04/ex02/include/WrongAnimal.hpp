#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
protected:
	std::string type;
public:
	//constructor and destructor
	WrongAnimal();
	WrongAnimal(std::string arg);
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal& operator=(const WrongAnimal& copy);
	virtual ~WrongAnimal();
	
	//member funciton
	void	makeSound() const;

	//getter
	std::string		getType() const;

	//setter
	void			setType(std::string arg);
};


#endif