#include "../includes/Bureaucrat.hpp"

int main()
{
    Bureaucrat bob("bob", 9);
    bob.rise_grade();
    std::cout << "increment: " << bob << std::endl;
    bob.lower_grade();
    std::cout << "decrement: " << bob << std::endl;

    std::cout << std::endl;
    try
    {
        Bureaucrat jeff(-1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat mark(151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat jack(149);
        jack.rise_grade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat luc(150);
        luc.lower_grade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	return (0);	
}
