#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	//Orthodox Canonical Form
	Cure(void);
	Cure(const Cure& copy);
	~Cure(void);
	Cure&	operator=(const Cure& other);

	//Member functions
	void		use(ICharacter& target);
	AMateria*	clone(void) const;
};

#endif
