#include <unistd.h>
#include <string.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 4)
    {
        while (av[1][i])
        {
            if (strlen(av[2]) > 1)
                break;
            if (strlen(av[3]) > 1)
                break;
            if (av[1][i] == av[2][0])
                write(1, &av[3][0], 1);
            else
                write(1, &av[1][i], 1);
            i++;
        }

    }
    write(1, "\n", 1);
}
