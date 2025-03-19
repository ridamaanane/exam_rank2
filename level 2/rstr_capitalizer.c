#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    if (ac == 1)
        write (1, "\n", 1);
    while (j < ac)
    {
        i = 0;
        while (av[j][i])
        {
            if (av[j][i] >= 'A' && av[j][i] <= 'Z')
                av[j][i] += 32;
            else
                av[j][i] = av[j][i];
            i++;
        }
        i = 0;
        while (av[j][i])
        {
            if ((av[j][i + 1] == '\0' || av[j][i + 1] == ' ') && (av[j][i] >= 'a' && av[j][i] <= 'z'))
            {
                av[j][i] -= 32;
                write(1, &av[j][i], 1);
            }
            else
                write(1, &av[j][i], 1);
            i++;
        }
        j++;
        write(1, "\n", 1);
    }
}
