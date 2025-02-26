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

int	ft_atoi(const char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    int mult;
    if (ac > 1)
    {
        mult = ft_atoi(av[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " ", 1);
            write(1, "x", 1);
            write(1, " ", 1);
            ft_putnbr(mult);
            write(1, " ", 1);
            write(1, "=", 1);
            write(1, " ", 1);
            j = i * mult;
            ft_putnbr(j);
            write(1, "\n", 1);
            i++;
        }
    }
    write (1, "\n", 1);
}