#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
    int *result;
    int i = 0;
    int size = 0;

    if (start < end)
        size = end - start + 1;
    else
        size = start - end + 1;

    result = malloc(sizeof(int) * size);
    if (!result)
        return (NULL);
    
    if (start <= end)
    {
        while (start <= end)
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
            result[i] = end;
            end++;
            i++;
        }
    }
    return (result);
}

int main()
{
    int *tab = ft_rrange(0, -3);


    for (int i = 0; i <=3; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}
