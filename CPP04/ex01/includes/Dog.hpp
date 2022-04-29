#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:

		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		virtual ~Dog();

		std::string		getType() const;
		virtual void	makeSound() const;

		const std::string&	getBrainIdeas(int index) const;
		void	setBrainIdeas(int index, const std::string& str) const;

	private:

		Brain* brain;


};

#endif
