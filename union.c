#include <unistd.h>

int check_duplicate(char *str, char c, int len)
{
    int i = 0;
    while (i < len)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    
    if (ac <= 3)
    {
        while (av[1][i])
        {
            if (!check_duplicate(av[1], av[1][i], i))
                write(1, &av[1][i], 1);
            i++;
        }
        while (av[2][j])
        {
            if (!check_duplicate(av[1], av[2][j], i) && !check_duplicate(av[2], av[2][j], j))
                write(1, &av[2][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
