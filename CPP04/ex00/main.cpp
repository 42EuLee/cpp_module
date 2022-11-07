#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "styling.h"

int main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongcat = new WrongCat();

	cout << TEL << "Printing All Types" << RESET << endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;

	cout << TEL << "Printing All Sounds" << RESET << endl;
	cout << ORG << "Dog sound: " << RESET << endl;
	dog->makeSound();
	cout << ORG << "Cat sound: " << RESET << endl;
	cat->makeSound(); //will output the cat sound!
	cout << ORG << "Wrong cat sound: " << RESET << endl;
	wrongcat->makeSound();
	cout << endl;
	delete dog;
	delete cat;
	delete wrongcat;
	return 0;
}