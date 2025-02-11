#include <unistd.h>
#include <stdio.h>

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
	if (ac >= 1)
	{
		while (av[i])
		{
			i++;
		}
		i--;
		ft_putnbr(i);
		write (1, "\n", 1);
	}
}
