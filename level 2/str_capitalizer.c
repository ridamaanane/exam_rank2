#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int	j = 0;
	if (ac >= 2)
	{
		while (j < ac)
		{
			if (av[j][0] >= 'a' && av[j][0] <= 'z')
			{
				av[j][0] = av[j][0] - 32;
				write (1, &av[j][0], 1);
			}
			else
				write (1, &av[j][0], 1);
			while (av[j][i])
			{
				if (av[j][i] >= 'A' && av[j][i] <= 'Z')
				{
					av[j][i] = av[j][i] + 32;
				}
				i++;
			}
			i = 1;
			while (av[j][i])
			{
				if ((av[j][i] >= 'a' && av[j][i] <= 'z') && (av[j][i - 1] == ' ' || av[j][i - 1] == '\t'))
				{
					av[j][i] -= 32;
					write (1, &av[j][i], 1);
				}
				else
					write (1, &av[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
	}
	write (1, "\n", 1);
}
