#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int space_found;
    if (ac == 2)
    {
        while (av[1][i] == ' ')
            i++;
        while (av[1][i])
        {
            space_found = 0;
            while (av[1][i] == ' ')
            {
                space_found = 1;
                i++;
            }
            if (av[1][i] == '\0')
                break;
            if (space_found)
                write(1, "   ", 3);
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}
