#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter{
public:
	//Orthodox Canonical Form
	Character(void);
	Character(const string& name);
	Character(const Character& copy);
	~Character(void);
	Character&	operator=(const Character& other);

	//Setters and Getters
	void			setName(const string& name);
	const string&	getName(void) const;

	//Member functions
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);

private:
	string name;
	AMateria* inventory[4];
};


#endif
