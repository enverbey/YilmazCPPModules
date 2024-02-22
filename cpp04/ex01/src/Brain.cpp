#include "../include/Brain.hpp"

//Orthodox Canonical Form
Brain::Brain(void){
	setIdeas("");
	cout << "Brain constructor is called "<< endl;
}
Brain::Brain(string idea){
	setIdeas(idea);
	cout << "Brain constructor is called" << endl;
}
Brain::Brain(const Brain& copy){
	*this = copy;
	cout << "Brain copy constructor is called" << endl;
}
Brain::~Brain(){
	cout << "Brain destructor is called" << endl;
}
Brain& Brain::operator=(const Brain& copy){
	cout << "Brain operator is called " << endl;
	if (this == &copy)
		return (*this);
	for (int i=0; i<100; i++)
	{
		this->setIdea(i, copy.getIdea(i));
	}
	return (*this);
}

//Setters and Getters
void	Brain::setIdea(int index, const string idea){
	if (index < 0 || index > 99)
		return ;
	this->ideas[index] = idea;
}
void	Brain::setIdeas(const string idea){
	for (int i=0; i<100; i++)
	{
		ideas[i] = idea;
	}
}
const string* Brain::getIdeas() const{
	return ideas;
}
const string Brain::getIdea(int index) const{
	return ideas[index];
}
