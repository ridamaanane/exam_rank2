#include <stdio.h>
#include <unistd.h>

int coun_word(char *str, char c)
{
	int i;
	int word;
	int check;

	i = 0;
	word = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (check == 0)
			{
				check = 1;
				word++;
			}
		}
		else
			check = 0;
		i++;
	}
	return (word);
}
int strlen_(char *str, char c)
{
	int i;

	i =0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
// void ft_strlcpy(char *dest, char *str, int leng)
// {
// 	int i;

// 	i = 0;
// 	while (i < l)
// }
#include <stdlib.h>
#include <string.h>

char **ft_split(char *str, char c)
{
	int size;
	char **all;
	int i;
	int length_word;

	size = coun_word(str, c);
	all = malloc(sizeof(char *) * (size + 1));
	if (!all)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*str == c)
			str++;
		length_word = strlen_(str, c);
		all[i] = malloc(sizeof(char) * (length_word + 1));
		if (!all[i])
			return (NULL);
		strncpy(all[i++], str, length_word);
		str += length_word;
	}
	all[i] = NULL;
	return (all);
}
//i found the probleme hubh
int main ()
{
	char **str = ft_split("hello assan how you doing?", ' ');
	for (int i = 0; i < 5; i++)
		printf("%s", str[i]);
}
