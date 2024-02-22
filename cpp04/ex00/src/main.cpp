#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"

void	pressEnter(void)
{
	cout << endl << "press ENTER to continue" << endl;
	cin.ignore();
	cout << "\033c";
}

int main(){

	cout << "\033c";
	{
		Animal *AnimalObject = new Animal();
		Animal *catObject = new Cat();
		Animal *dogObject = new Dog();

		cout << "><><><><><><><><><><><><><><><><><><><><><><" << endl;

		AnimalObject->makeSound();
		catObject->makeSound();
		dogObject->makeSound();

		cout << "><><><><><><><><><><><><><><><><><><><><><><" << endl;

		delete AnimalObject;
		delete catObject;
		delete dogObject;
	}
	pressEnter();
	{
		WrongAnimal *wrongAnimalObject = new WrongAnimal();
		WrongAnimal *wrongCatObject = new WrongCat();

		cout << "><><><><><><><><><><><><><><><><><><><><><><" << endl;

		wrongAnimalObject->makeSound();
		wrongCatObject->makeSound();

		cout << "><><><><><><><><><><><><><><><><><><><><><><" << endl;

		delete wrongAnimalObject;
		delete wrongCatObject;
	}
}
