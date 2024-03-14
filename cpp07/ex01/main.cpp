#include "iter.hpp"

int	main(void)
{
	int arr[2] = {42, 14};
	::iter(arr, 2, print);
	::swap(arr[0], arr[1]);
	::iter(arr, 2, print);

	string strings[] = {"Enver", "Yilmaz", "learning", "cpp"};
	::iter(strings, 5, print);
}
