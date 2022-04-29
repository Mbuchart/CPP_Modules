#include "../includes/type_info.hpp"

int main()
{
	std::srand(std::time(NULL));
	Base *base = generate();
	identify(base);
	identify(*base);

	delete base;
	
	return (0);	
}
