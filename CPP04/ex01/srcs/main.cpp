#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	const Animal* sample[4];

    for (int i = 0; i < 2; ++i)
    {
        sample[i] = new Dog();
    }
	
	NL

    for (int i = 2; i < 4; ++i)
    {
        sample[i] = new Cat();
    }

	NL

    for (int i = 0; i < 4; ++i)
    {
        delete sample[i];
    }

	NL

	Cat i;
	Dog tmp;
	Dog j(tmp);

	NL

	i.setBrainIdeas(0, "0 miaouuuuu");
	i.setBrainIdeas(1, "1 miaouuuuu");
	i.setBrainIdeas(2, "2 pateeeee!");

	std::cout << "cat brain ideas 0: " << i.getBrainIdeas(0) << std::endl;
	std::cout << "cat brain ideas 1: " << i.getBrainIdeas(1) << std::endl;
	std::cout << "cat brain ideas 2: " << i.getBrainIdeas(2) << std::endl;

	NL

	j.setBrainIdeas(0, "0 woooooof");
	j.setBrainIdeas(1, "1 wooooooof");
	j.setBrainIdeas(2, "2 croquettes!");

	std::cout << "cat brain ideas 0: " << j.getBrainIdeas(0) << std::endl;
	std::cout << "cat brain ideas 1: " << j.getBrainIdeas(1) << std::endl;
	std::cout << "cat brain ideas 2: " << j.getBrainIdeas(2) << std::endl;

	NL

	return (0);	
}
