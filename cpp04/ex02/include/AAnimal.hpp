#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

class AAnimal{
public:
	//Orthodox Canonical Form
	AAnimal(void);
	AAnimal(const string _type);
	AAnimal(const AAnimal& copy);
	virtual ~AAnimal(void);
	AAnimal& operator=(const AAnimal& copy);

	//Setters and Getters
	void setType(const string type);
	string getType(void) const;

	//Member functions
	virtual void	makeSound(void) const = 0;
protected:
	string type;
};

#endif
