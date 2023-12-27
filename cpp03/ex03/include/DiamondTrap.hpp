#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
private:
	std::string name;
	DiamondTrap();
public:
	//Constructors and destructor
	DiamondTrap(std::string argName);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap &operator=(const DiamondTrap& copy);
	~DiamondTrap();

	//member function
	void			whoAmI(void);
	void			attack(std::string target);

	//setter
	void			setDiamondName(std::string argName);

	//getter
	std::string 	getDiamondName(void) const;
};

#endif