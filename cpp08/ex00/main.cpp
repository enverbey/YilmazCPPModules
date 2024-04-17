#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(16);
	v.push_back(4);
	v.push_back(6);
	v.push_back(635);
	v.push_back(63);

	easyfind(v, 42);
	easyfind(v, 10);
	easyfind(v, 63);

	std::list<int> l;
	l.push_back(10);
	l.push_back(16);
	l.push_back(4);
	l.push_back(6);
	l.push_back(635);
	l.push_back(63);
	
	easyfind(l, 42);
	easyfind(l, 10);
	easyfind(l, 63);

}