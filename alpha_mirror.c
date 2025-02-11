#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j;
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	char *lower_rev = "zyxwvutsrqponmlkjihgfedcba";
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *upper_rev= "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = 0;
				while (lower[j])
				{
					if (av[1][i] == lower[j])
					{
						write (1, &lower_rev[j], 1);
					}
					j++;
				}
			}
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = 0;
				while (upper[j])
				{
					if (av[1][i] == upper[j])
					{
						write (1, &upper_rev[j], 1);
					}
					j++;
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);

}
