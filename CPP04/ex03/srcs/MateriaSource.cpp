#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i = 0;

	while (i < 4)
	{
		materia[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for(int i = 0; i < 4; ++i)
			delete materia[i];
		for(int i = 0; i < 4; ++i)
			materia[i] = other.materia[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	int i = 0;

	while (i < 4)
	{
		if (materia[i])
			delete materia[i];
		i++;
	}
}

const AMateria* MateriaSource::get_materia(int i) const
{
    if (i >= 0 && i <= 3)
        return (materia[i]);
	else
    	return (NULL);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (i < 4)
	{
		if (materia[i] == NULL)
		{
			materia[i] = m;
			break ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < 4)
	{
		if (materia[i] == NULL)
			break ;
		if (materia[i]->getType() == type)
			return (materia[i]->clone());
		i++;
	}
    return 0;
}
