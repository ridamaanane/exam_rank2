#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}


int main()
{
	int i = 9;
	while (i >= 0)
	{
		ft_putchar(i % 10 + '0');
		i--;
	}
}

||


int	main(void)
{
	write(1, "9876543210\n", 11);
}
