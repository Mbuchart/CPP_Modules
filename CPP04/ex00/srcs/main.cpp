#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	NL

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	NL
	
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	NL

	delete meta;
	delete i;
	delete j;

	NL NL

	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* c = new WrongCat();

	NL

	std::cout << w->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;

	NL

	w->makeSound();
	c->makeSound();

	NL

	delete w;
	delete c;

	return (0);	
}
