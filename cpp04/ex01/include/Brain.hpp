#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class Brain{
public:
	//Orthodox Canonical Form
	Brain(void);
	Brain(const string idea);
	Brain(const Brain& copy);
	~Brain(void);
	Brain& operator=(const Brain& copy);

	//Setters and Getters
	void	setIdea(int index, const string idea);
	void	setIdeas(const string idea);
	const string* getIdeas() const;
	const string getIdea(int index) const;
private:
	string ideas[100];
};

#endif
