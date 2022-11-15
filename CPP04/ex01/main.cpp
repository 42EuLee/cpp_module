#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "styling.h"

int main(void)
{
	cout << TEL << "------------------PDF Requirement------------------------" <<  RESET << endl;
	{
		const int num = 10;

		const	Animal *animals[num];
		const	Animal animalZ;		// work cause it is not an abstract class.

		cout << "---------------------------------------------------------------" << endl;
		for (int i = 0; i < num; i++)
		{
			if (i < num / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			cout << i + 1 << ". " << animals[i]->getType() << endl;
			animals[i]->makeSound();
			cout << "---------------------------------------------------------------" << endl;
			// delete animals[i];
		}
		for (int i = 0; i < num; i++)
			delete animals[i];
	}

	cout << TEL << "------------------Deep Copy Test------------------------" <<  RESET << endl;
	{
		Cat	*oricat = new Cat();
		Cat	*copycat = new Cat(*oricat);

		cout << "oricat brain address: " GRN "<" << oricat->getBrain() << ">" RESET << endl;
		cout << "copycat brain address: " GRN "<" << copycat->getBrain() << ">" RESET << endl;
		cout << "oricat type: " BLU "<" << oricat->getType()<< ">" RESET << endl;
		cout << "copy type: " BLU "<" << copycat->getType()<< ">" RESET << endl;
		cout << endl;

		cout << "Changing oricat type to <Jason>" RESET << endl;
		cout << endl;
		oricat->setType("Jason");

		cout << "ori type: " BLU "<" << oricat->getType()<< ">" RESET << endl;
		cout << "copy type: " BLU "<" << copycat->getType()<< ">" RESET << endl;
		cout << endl;

		delete oricat;
		cout << copycat->getType() << endl;
		// copycat->getBrain()->printIdeas();
		// cout << oricat->getType() << endl; // should not work
		delete copycat;
	}
}