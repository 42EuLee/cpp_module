#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	const int num = 10;

	const	Animal *animals[num];
	// const	Animal animal;


	for (int i = 0; i < num; i++)
	{
		if (i < num / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		cout << i + 1 << ". " << animals[i]->getType() << endl;
		animals[i]->makeSound();
	}

	return (0);
}