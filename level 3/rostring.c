#include <unistd.h>
#include <stdio.h>

void    pp(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
    int toggle = 0;

    while (av[1][i] && av[1][i] == ' ')
        i++;
    j = i;
    while (av[1][i] && av[1][i] != ' ')
        i++;
    while (av[1][i])
    {
        if (av[1][i] == ' ' && toggle == 1)
        {
            toggle = 0;
            pp(' ');
        }
        else if (av[1][i] != ' ')
        {
            pp(av[1][i]);
            toggle = 1;
        }
        i++;
    }
    if (toggle != 0)
        pp(' ');
    while (av[1][j] && av[1][j] != ' ')
    {
        pp(av[1][j]);
        j++;
    }
    pp('\n');
}
