#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>

# define END_COLOR "\033[0m"
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGANTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define ORANGE "\033[38;5;208m"
# define PURPLE "\033[38;5;165m"
# define CRAZY_COLOR "\033[38;5;206m"

class ClapTrap{
private:
	std::string		name;			//name of the ClapTrap
	unsigned int	hitPoints;		//represent the health of the ClapTrap
	unsigned int	energyPoints;	//represent the energy of the ClapTrap
	unsigned int	attackDamage;	//represent the attack damage of the ClapTrap
	ClapTrap();
public:
	//Constructors and destructor
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap &operator=(const ClapTrap& copy);
	~ClapTrap();
	
	//member funcitons
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	
	//Bonus
	void		untilDeath(ClapTrap& enemy);
	static void	put_message_color(std::string str, std::string color);

	//setters
	void		setHitPoints(unsigned int arg);
	void		setEnergyPoints(unsigned int arg);
	void		setAttackDamage(unsigned int arg);
	
	//getters
	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getAttackDamage() const;
};

#endif