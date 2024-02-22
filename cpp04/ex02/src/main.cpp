#include "../include/WrongCat.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

void	pressEnter(void)
{
	cout << endl << "press ENTER to continue" << endl;
	cin.ignore();
	cout << "\033c";
}

int main(void)
{
	{
		const AAnimal* aanimals[10];
		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				aanimals[i] = new Dog("2+2=4");
			else
				aanimals[i] = new Cat("2+2=5");
		}

		for (int i = 0; i < 10; i++)
		{
			delete aanimals[i];
		}
	}

	return (0);
}
