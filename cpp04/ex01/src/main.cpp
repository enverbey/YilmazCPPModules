#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"

void	pressEnter(void)
{
	cout << endl << "press ENTER to continue" << endl;
	cin.ignore();
	cout << "\033c";
}

#define MAX_AnimalS 10

int main(void)
{
// 	Cat obj("Funda");
// 	Animal *obj2 = new Cat(obj);

// 	//delete obj2;
// 	getchar();
// 	getchar();
// 	const Brain &b = obj.getBrain();
// 	cout << "idea : " << b.getIdea(1) << endl;
// getchar();
// 	getchar();
// 	obj2->makeSound();

	if (MAX_AnimalS < 2 || MAX_AnimalS % 2 != 0)
	{
		cout << "MAX_AnimalS must be an even number greater than 1" << endl;
		return (1);
	}

	const Animal* Animals[MAX_AnimalS];

	for (size_t i = 0; i < MAX_AnimalS; i++)
		Animals[i] = 0;


	{
		for (size_t i = 0; i < MAX_AnimalS; i++)
		{
			if (i % 2 == 0)
				Animals[i] = new Dog("2+2=4");
			else
				Animals[i] = new Cat("2+2=5");
		}

		for (size_t i = 0; i < MAX_AnimalS; i++)
			delete Animals[i];
	}

	return (0);
}
