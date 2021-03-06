#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &other);
		virtual ~WrongCat();

		std::string		getType() const;
		void	makeSound() const;


	private:


};

#endif
