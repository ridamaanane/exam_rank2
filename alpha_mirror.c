#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                j = 'm' - (av[1][i] - 'n');
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                j = 'M' - (av[1][i] - 'N');
            else
                j = av[1][i];
            write (1, &j, 1);
            i++;
        }
    }
}
