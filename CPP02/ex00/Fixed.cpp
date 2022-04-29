#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point_value = 0;
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
	std::cout << "copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->fixed_point_value = other.getRawBits();
	std::cout << "assignation operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point_value = raw;
}