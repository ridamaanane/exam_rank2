#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	int found;
	if (ac == 3)
	{
		while (av[1][i] && av[2][j])
		{
			found = 0;
			if (av[1][i] == av[2][j])
			{
				found = 1;
				i++;
			}
			if (found == 1 && av[1][i] == '\0')
				write (1, "1", 1);

			j++;
		}
		if (found == 0)
			write (1, "0", 1);
	}
	write (1, "\n", 1);
}
