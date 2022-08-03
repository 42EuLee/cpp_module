#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "MyRetardedCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* x = new MyRetardedCat(); 

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	x->makeSound();
	meta->makeSound();

	return 0;
}