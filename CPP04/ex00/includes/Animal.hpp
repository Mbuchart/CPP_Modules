#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#define NL std::cout << std::endl;

#include <iostream>
#include <string>

class Animal
{
	public:

		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();

		std::string	getType() const;
		virtual void	makeSound() const;

	protected:

		std::string	type;


};

#endif
