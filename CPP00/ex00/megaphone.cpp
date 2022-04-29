#include <iostream>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        for(int i(1); argv[i] != NULL; i++)
        {
            for(int j(0); argv[i][j]; j++)
            {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    argv[i][j] -= 32;
            }
            std::cout << argv[i];
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}