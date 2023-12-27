#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
private:
	FragTrap();
public:
	//Constructors and destructor
	FragTrap(std::string name);
	FragTrap(const FragTrap& copy);
	FragTrap &operator=(const FragTrap& copy);
	~FragTrap();

	//member functions
	void highFivesGuys(void);
};

#endif