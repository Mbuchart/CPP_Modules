#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

#define F_POINT (1 << 8)

class Fixed
{

	public:

		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int n);
		Fixed(const float n);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
	
		int toInt(void) const;
		float toFloat(void) const;

	private:
		
		int 				fixed_point_value;
		static const int	fract_bits = 8;

};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif