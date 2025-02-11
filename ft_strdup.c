#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
char    *ft_strdup(char *str)
{
	int i = 0;
	char *result;

	result = malloc(ft_strlen(str) + 1);
	if (!result)
		return (NULL);
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
#include <stdio.h>

int main()
{
	char str[] = "rida";
	char *result = ft_strdup(str);

	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
}
