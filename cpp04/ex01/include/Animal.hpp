#ifndef Animal_HPP
# define Animal_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

class Animal{
public:
	//Orthodox Canonical Form
	Animal(void);
	Animal(const string _type);
	Animal(const Animal& copy);
	virtual ~Animal(void);
	Animal& operator=(const Animal& copy);

	//Setters and Getters
	void setType(const string type);
	string getType(void) const;

	//Member functions
	virtual void	makeSound(void) const;
protected:
	string type;
};

#endif
