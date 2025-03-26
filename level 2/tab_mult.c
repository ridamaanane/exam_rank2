#include <unistd.h>

void ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    char c = n % 10 + 48;
    write(1, &c, 1);
}
int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result * sign);
}
#include <stdio.h>

int main(int ac, char **av)
{
    int i = 1;
    int k;


    if (ac == 1)
    {
        write(1, "\n", 1);
        return (1);
    }

    k = ft_atoi(av[1]);

    while (i <= 9)
    {
        ft_putnbr(i);
        write(1, " ", 1);
        write(1, "x", 1);
        write(1, " ", 1);
        ft_putnbr(k);
        write(1, " ", 1);
        write(1, "=", 1);
        write(1, " ", 1);
        ft_putnbr(i * k);

        write(1, "\n", 1);
        i++;
    }

}
