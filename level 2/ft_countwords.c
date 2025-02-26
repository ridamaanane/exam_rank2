#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int main(int ac, char **av)
{
    int i = 0;
    int toggle = 0;
    int word = 0;


    while(av[1][i] == ' ')
    i++;
    while (av[1][i])
    {
        if (av[1][i] == ' ' && toggle == 1)
        {
            toggle = 0;
            word++;
        }
        else if (av[1][i] != ' ')
            toggle = 1;
        i++;
    }
    if (toggle == 1)
        word++;
    ft_putnbr(word);
}