#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class ICharacter;

class AMateria
{
protected:
	string type;
public:
	//Orthodox Canonical Form
	AMateria(void);
	AMateria(const string& type);
	AMateria(const AMateria& copy);
	virtual ~AMateria();
	AMateria& operator=(const AMateria& copy);

	//Setters and Getters
	const string& getType(void) const;
	void	setType(const string type);

	//Member functions
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
