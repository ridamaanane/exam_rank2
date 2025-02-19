#include <stdio.h>


char    *ft_strrev(char *str)
{
	int i = 0;
	int swap;
	int j = 0;

	while (str[i])
		i++;
	i--;
	while (i > j)
	{
		swap = str[j];
		str[j] = str[i];
		str[i] = swap;
		j++;
		i--;
	}
	return (str);
}
int main()
{
	char str[] = "rida";
	printf("%s", ft_strrev(str));
}
