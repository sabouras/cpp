#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        i = 0;
        while (av[++i])
        {
            j = -1;
            while (av[i][++j])
                std::cout << (char)toupper(av[i][j]);
            std::cout << " ";
        }
    }
    std::cout<<std::endl;
}