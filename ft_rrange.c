#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int size;
	int *result;

	if (start < end)
		size = end - start + 1;
	else
		size = start - end + 1;

	result = malloc (sizeof(int) * size);
	if (!result)
		return (NULL);

	int i = 0;
	if (start <= end)
	{
		while (end >= start)
		{
			result[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			result[i] = start;
			start--;
			i++;
		}
	}
	return (result);
}
int main()
{
    int *range = ft_rrange(3, 8);

	for (int i = 0; i <= 5; i++)
	{
		printf("%d\n", range[i]);
	}

}

