#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		virtual ~Cat();

		std::string		getType() const;
		virtual void	makeSound() const;

		const std::string&	getBrainIdeas(int index) const;
		void	setBrainIdeas(int index, const std::string& str) const;

	private:

		Brain* brain;
	
};

#endif
