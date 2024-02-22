#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_learnedMaterias[4];
	int			_numLearned;
public:
	//Orthodox Canonical Form
	MateriaSource(void);
	MateriaSource(const MateriaSource& copy);
	~MateriaSource(void);
	MateriaSource&	operator=(const MateriaSource& other);

	//Setters and Getters
	void		setNumLearned(const int numLearned);
	int			getNumLearned(void) const;

	//Member functions
	void		learnMateria(AMateria* m);
	AMateria*	createMateria(string const& type);
};

#endif
