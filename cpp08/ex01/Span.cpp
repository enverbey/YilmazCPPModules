#include "Span.hpp"

//constructor
Span::Span(unsigned int _size){
	this->size = _size;
}
Span::Span(const Span& copy){
	*this = copy;
}
Span::~Span(){}
Span& Span::operator=(const Span& copy){
	if (this != &copy)
	{
		this->size = copy.getSize();
		this->v = copy.getVector();
	}
	return (*this);
}

//Getters
const vector<int>& Span::getVector(void) const{
	return v;
}
const unsigned int Span::getSize(void) const{
	return size;
}
void Span::setSize(unsigned int _size){
	this->size = _size;
}

void Span::addNumber(int number){
	if (v.size() == size)
		throw outOffSizeException();
	v.push_back(number);
}
int Span::shortestSpan() {
	int diff;
	int shortest;

	if (v.size() <= 1)
		throw notEnoughNumber();
	shortest = v[0] - v[1];
	if (shortest < 0)
		shortest *= -1;
	for (int i=0; i<v.size()-1; i++)
	{
		diff = v[i] - v[i+1];
		if (diff < 0)
			diff *= -1;
		if (shortest > diff)
			shortest = diff;
	}
	return shortest;
}
int Span::longestSpan() {
	int diff;
	int longest;

	if (v.size() <= 1)
		throw notEnoughNumber();
	longest = v[0] - v[1];
	if (longest < 0)
		longest *= -1;
	for (int i=0; i<v.size()-1; i++)
	{
		diff = v[i] - v[i+1];
		if (diff < 0)
			diff *= -1;
		if (longest < diff)
			longest = diff;
	}
	return longest;
}
void	Span::printSpanNumber() {
	vector<int>::iterator it = v.begin();
	int i=1;
	cout << "Span Numbers" << endl;
	while (it != v.end())
	{
		cout <<i << ". number : " << *it << endl;
		i++;
		it++;
	}
}
void Span::fillRandomly(){
	srand(time(NULL));

	while (size > v.size())
	{
		addNumber(rand());
	}
}

//Nested exception class
const char* Span::outOffSizeException::what() const throw(){
	return ("Out off size!!");
}
const char* Span::notEnoughNumber::what() const throw(){
	return ("There is not enough number !!");
}