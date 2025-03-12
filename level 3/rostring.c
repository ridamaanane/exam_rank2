#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j;
    int found = 0;
    if (ac > 1)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        j = i;
        while ((av[1][i] != ' ' && av[1][i] != '\t')  && av[1][i])
            i++;
        while (av[1][i])
        {
            if ((av[1][i] == ' ' || av[1][i] == '\t') && found == 1)
            {
                write(1, " ", 1);
                found = 0;
            }
            else if (av[1][i] != ' ' && av[1][i] != '\t')
            {
                found = 1;
                write(1, &av[1][i], 1);
            }
            i++;
        }
        if (found == 1)
            write(1, " ", 1);
        while (av[1][j] && (av[1][j] != ' ' && av[1][i] != '\t'))
        {
            write(1, &av[1][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
}