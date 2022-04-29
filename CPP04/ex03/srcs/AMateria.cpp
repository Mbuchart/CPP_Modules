#include "../includes/AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const & type)
{
	_type = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	(void)other;
	_type = "";
	return (*this);
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << target.getName() << " Cannot do anything... Error 404." << std::endl;
}
