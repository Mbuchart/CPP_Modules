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

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_value = n << fract_bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point_value = roundf(n * F_POINT);
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

int Fixed::toInt(void) const
{
	return (fixed_point_value >> fract_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)fixed_point_value/F_POINT);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}