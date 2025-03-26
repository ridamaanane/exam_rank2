#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (reject[k])
		{
			if (s[i] == reject[k])
				return (i);
			k++;
		}
		k = 0;
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("me [%lu]\n", ft_strcspn("rias", "ds"));
	printf("origin [%lu]\n", strcspn("rias", "ds"));
    printf("me [%lu]\n", ft_strcspn("test", "f"));
	printf("origin [%lu]\n", strcspn("test", "f"));
}