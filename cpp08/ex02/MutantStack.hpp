#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
using std::stack;
using std::cout;
using std::endl;

template <typename T>
class MutantStack : public stack<T>{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	//Orthodox Canonical Form
	MutantStack() : stack<T>(){}
	MutantStack(const MutantStack& copy) : stack<T>(copy){}
	~MutantStack(){}
	MutantStack& operator=(const MutantStack& copy){
		if (this != &copy)
			this->c = copy.c;
		return (*this);
	}

	//iterator
	MutantStack<T>::iterator begin(void){
		return this->c.begin();
	}
	MutantStack<T>::iterator end(void){
		return this->c.end();
	}
	//const iterator
	MutantStack<T>::const_iterator begin(void) const{
		return this->c.begin();
	}
	MutantStack<T>::const_iterator end(void) const{
		return this->c.end();
	}
	//reverse iterator
	MutantStack<T>::reverse_iterator rbegin(void){
		return this->c.rbegin();
	}
	MutantStack<T>::reverse_iterator rend(void){
		return this->c.rend();
	}
	//const reverse iterator
	MutantStack<T>::const_reverse_iterator rbegin(void) const{
		return this->c.rbegin();
	}
	MutantStack<T>::const_reverse_iterator rend(void) const{
		return this->c.rend();
	}

};

#endif