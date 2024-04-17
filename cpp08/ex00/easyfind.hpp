#include <iostream>
#include <vector>
#include <list>
using std::cout;
using std::endl;

template <typename T>
int	easyfind(const T& container, int value)
{
	int index = 0;
	typename T::const_iterator it = container.begin();

	while (it != container.end())
	{
		if (*it == value)
		{
			cout << value << " is " << index << " in index." << endl;
			return index;
		}
		index++;
		it++;
	}
	cout << "value" << value << " is not found!" << endl;
	return (-1);
}