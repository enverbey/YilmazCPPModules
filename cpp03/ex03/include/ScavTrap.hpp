#ifndef SCAVTRAP_HH
# define SCAVTRAP_HH

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
protected:
	ScavTrap();
public:
	//Constructors and destructor
	ScavTrap(std::string arg);
	ScavTrap(const ScavTrap& copy);
	ScavTrap &operator=(const ScavTrap& copy);
	~ScavTrap();

	//member functions
	void	attack(const std::string& target);
	void 	guardGate();
};

#endif