
#include <stdlib.h>


int	ft_countwords(char *str, char c)
{
	int	i;
	int	word;
	int	count;

	i = 0;
	word = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (word == 0)
			{
				word++;
				count++;
			}
		}
		else
			word = 0;
		i++;
	}
	return (count);
}

int	ft_wordlen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*ft_wordcpy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *s, char c)
{
	char	**result;

	int (i), (size), (len_word);
	if (!s)
		return (NULL);
	size = ft_countwords(s, c);
	result = malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*s == c)
			s++;
		len_word = ft_wordlen(s, c);
		result[i] = malloc(sizeof(char) * (len_word + 1));
		ft_wordcpy(result[i], s, len_word);
		s += len_word;
		i++;
	}
	result[i] = NULL;
	return (result);
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>


// char **ft_split(char *s)
// {
//         char **array;
//         int i, x;

//         array = malloc(sizeof(char *) * 1024);
//         i = 0;
//         while (*s && *s == ' ')
//                 s++;
//         while (*s)
//         {
//                 array[i] = malloc(sizeof(char) *1000);
//                 x = 0;
//                 while (*s && *s != ' ')
//                 {
//                         array[i][x] = *s;
//                         s++;
//                         x++;
//                 }
//                 array[i][x] = '\0';
//                 while (*s && *s == ' ')
//                         s++;
//                 i++;
//         }
//         array[i] = NULL;
//         return (array);
// }


#include <stdio.h>

int main()
{
		char **result = ft_split("rida maanane cava", ' ');
		for (int i = 0; i < 3; i++)
			printf("%s\n", result[i]);


}


