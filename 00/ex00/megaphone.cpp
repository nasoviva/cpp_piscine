#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] >= 97 && argv[i][j] <= 122)
		            argv[i][j] = argv[i][j] -32;
                std::cout << (argv)[i][j];
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
