#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	//Orthodox Canonical Form
	Ice(void);
	Ice(const Ice& copy);
	~Ice(void);
	Ice&	operator=(const Ice& other);

	//Member functions
	void		use(ICharacter& target);
	AMateria*	clone(void) const;
};

#endif
