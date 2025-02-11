#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 1;
	int n;
	if (ac == 2)
	{
		n = atoi(av[1]);
		while (j <= 9)
		{
			ft_putnbr(j);
			write(1, " ", 1);
			write(1, "x", 1);
			write(1, " ", 1);
			ft_putnbr(n);
			write(1, " ", 1);
			write(1, "=", 1);
			write(1, " ", 1);
			i = j * n;
			ft_putnbr(i);
			write (1, "\n", 1);
			j++;
		}
	}
	write (1, "\n", 1);
}
