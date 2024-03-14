#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void	iter(T* array, size_t size, void(*f)(T&))
{
	for (size_t i=0; i<size; i++)
		f(array[i]);
}

template <typename T>
void	swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
void	print(T& s){
	cout << s << endl;
}

#endif