#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <exception>
using std::vector;
using std::list;
using std::exception;
using std::endl;
using std::cout;
using std::cin;

class Span{
public:
	//Orthodox Canonical Form
	Span(unsigned int);
	Span(const Span&);
	~Span();
	Span& operator=(const Span& copy);

	//Getters
	const vector<int>& getVector(void) const;
	const unsigned int getSize(void) const;
	void setSize(unsigned int);

	//Member function
	void addNumber(int);
	template <typename T>
	void addRange(const T&);
	template <typename T>
	void addRange(const T&, const T&);
	void fillRandomly();
	int shortestSpan();
	int longestSpan();
	void printSpanNumber();

	//Nested exception class
	class outOffSizeException : public exception{
		public:
			virtual const char* what() const throw();
	};
	class notEnoughNumber : public exception{
		public:
			virtual const char* what() const throw();
	};
private:
	vector<int> v;
	unsigned int size;
};

template <typename T>
void Span::addRange(const T& contanier)
{
	typename T::const_iterator it = contanier.begin();
	while (it != contanier.end())
	{
		addNumber(*it);
		it++;
	}
}
template <typename T>
void Span::addRange(const T& begin, const T& end)
{
	for (T it = begin; it != end; ++it) {
		addNumber(*it);
	}
}

#endif