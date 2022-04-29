#ifndef ATOICFD_HPP
# define ATOICFD_HPP

#define INT_MIN -2147483648
#define INT_MAX +2147483647

#include <iostream>
#include <cstring>
#include <limits>
#include <cfloat>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstdlib>

class Atoicfd
{
	public:

	Atoicfd();
	Atoicfd(std:: string a);
	Atoicfd(const Atoicfd &other);
	Atoicfd &operator=(const Atoicfd &other);
	~Atoicfd();

	bool convertible(std::string a);

	bool check_int(std::string a);

	bool check_double(std::string a);
	bool check_double_infnan(std::string a);

	bool check_float(std::string a);
	bool check_float_inffnanf(std::string a);

	private:

	std::string 	_a;
	unsigned int 	_a_len;
	char 			_c;
	long int 		_i;
	double 			_d;
	float 			_f;

};

#endif
