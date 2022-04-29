#include "../includes/Bureaucrat.hpp"

int main()
{
    Bureaucrat bob("bob", 9);
    Bureaucrat luc("luc", 140);
    bob.rise_grade();
    std::cout << "increment: " << bob << std::endl;
    bob.lower_grade();
    std::cout << "decrement: " << bob << std::endl;

    std::cout << std::endl;
    try
    {
        Bureaucrat john(-1);
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
        Bureaucrat jeff(150);
        jeff.lower_grade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    //

    Form A1("A1", 19, 25);
    Form A2(48, 48);
    Form A3;

    std::cout << bob << std::endl;
    std::cout << luc << std::endl;
    std::cout << A1 << std::endl;
    std::cout << A2 << std::endl;
    std::cout << A3 << std::endl;


    try 
    {
        bob.signForm(A1);
    }
    catch (std::exception &e) 
    {
        std::cout << "Exception caught: "<< e.what() << std::endl;
    }

    try 
    {
        luc.signForm(A2);
    }
    catch (std::exception &e) 
    {
        std::cout << "Exception caught: "<< e.what() << std::endl;
    }

    try 
    {
        luc.signForm(A3);
    }
    catch (std::exception &e) 
    {
        std::cout << "Exception caught: "<< e.what() << std::endl;
    }
	return (0);	
}
