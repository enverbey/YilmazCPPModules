#ifndef WRONGAnimal_HPP
# define WRONGAnimal_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal{
public:
	//Orthodox Canonical Form
	WrongAnimal(void);
	WrongAnimal(const string _type);
	WrongAnimal(const WrongAnimal& copy);
	virtual ~WrongAnimal(void);
	WrongAnimal& operator=(const WrongAnimal& copy);

	//Setters and Getters
	void setType(const string type);
	string getType(void) const;

	//Member functions
	void	makeSound(void) const;
protected:
	string type;
};

#endif
