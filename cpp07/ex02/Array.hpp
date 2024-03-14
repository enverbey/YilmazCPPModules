#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array{
public:
	Array(void);
private:
	T array;
};

#include "Array.tpp"

#endif