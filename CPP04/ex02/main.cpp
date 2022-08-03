#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const int num = 10;

	const	AAnimal *animals[num];
	const	Brain *brain;

	for (int i = 0; i < num; i++)
	{
		if (i < num / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		cout << animals[i]->getType() << endl;
	}

	return (0);
}