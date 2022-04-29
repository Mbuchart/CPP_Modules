#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	NL

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	NL
	
	i->makeSound();
	j->makeSound();
	//meta->makeSound();

	NL
	
	//delete meta;
	delete i;
	delete j;

	return 0;
}
