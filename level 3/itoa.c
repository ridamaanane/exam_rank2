#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	len_itoa(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long nb;
	int len;
	char *result;
	len = len_itoa(n);
	nb = n;

	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';

	if (nb == 0)
	{
		result[0] = '0';
		return (result);
	}

	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}

	while (nb > 0)
	{
		len--;
		result[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}


int main()
{
	printf("%s", ft_itoa(0));
}
