#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	int a[26] = {0};
	int b[26] = {0};
	size_t i = 0;
	if (ac == 3)
	{
		
		if (strlen(av[1]) == strlen(av[2]))
		{
			while (av[1][i])
			{
				a[av[1][i] - 97]++;
				i++;
			}
			i = 0;
			while (av[2][i])
			{
				b[av[2][i] - 97]++;
				i++;
			}
			i = 0;
			while (i < 26)
			{
				if (a[i] == b[i])
					i++;
				else
				{
					printf("false");
					break;
				}
			}
			if (i == 26)
				printf("true");
			// for (i = 0; i < 26; i++)
			// {
			// 	printf("%d, ",  a[i]);
			// }
			// printf("\n");
			// for (i = 0; i < 26; i++)
			// {
			// 	printf("%d, ",  b[i]);
			// }
		}
		else
			printf("false");
	}
	printf("\n");
}

