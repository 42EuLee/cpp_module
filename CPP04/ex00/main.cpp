#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "styling.h"

int main(void)
{
	{
		cout << TEL << "------------------PDF TEST------------------------" <<  RESET << endl;
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
		// system("leaks Animal");
	}

	// {
	// 	cout << TEL << "------------------Deep copy test2------------------------" <<  RESET << endl;

	// 	const Animal	*cat = new Cat();
	// 	const Animal	*dog = new Dog();


	// 	cout << ORG << "Before using copy constructor" << RESET <<endl;
	// 	cout << &dog->getType() << endl;
	// 	cout << &cat->getType() << endl;

	// 	cout << ORG << "After using copy constructor" << RESET << endl;
	// 	cat = dog;
	// 	const Animal	*copycat = new Dog(*dog);
	// 	cout << &dog << endl;
	// 	cout << &cat << endl;

	// 	delete cat;
	// 	delete dog;
	// }
	{
		// cout << TEL << "------------------Deep copy test------------------------" <<  RESET << endl;

		// const Cat	*cat = new Cat();
		// const Cat	*copycat = new Cat(*cat);

		// cout << ORG << "Before using copy constructor" << RESET <<endl;
		// cout << "Address of cat " << &cat << endl;
		// cout << "Address of copycat " << &copycat << endl;

		// const Cat	*test = cat;
		// cout << ORG << "After using copy constructor" << RESET << endl;
		// cout << "Address of cat " << &cat << endl;
		// cout << "Address of copycat " << &copycat << endl;
		// cout << "Address of test " << &test << endl;

		// delete cat;
		// // delete copycat;
		// delete test;


		// Testingo //
		// cout << "hoaduhaiudhuaidhaiu" << endl << endl;

		// std::string *ori = new string("ori string");
		// std::string *copy = new string(*ori);

		// std::string *c2 = ori;
		// cout << &ori << endl;
		// cout << &copy << endl;
		// cout << &c2 << endl;

		// delete ori;
		// delete copy;
		// delete c2;
	}
}