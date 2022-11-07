#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const int num = 10;

	const	AAnimal *animals[num];
	// const	AAnimal animals;

	for (int i = 0; i < num; i++)
	{
		if (i < num / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		cout << animals[i]->getType() << endl;
		// cout << animals[i]->makeSound() << endl;
		animals[i]->makeSound();
		// cout << "test\n" << endl;

	}

	return (0);
}