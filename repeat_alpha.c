#include <unistd.h>

void repeat_alpha(char c)
{
	int position = c - 'a' + 1; 
	int j = 0;
	while (j < position)
	{
		write(1, &c, 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				repeat_alpha(av[1][i]);
			else
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);

}

