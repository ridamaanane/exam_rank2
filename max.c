#include <stdio.h>

int max(int* tab, unsigned int len)
{
    if (len == 0)
        return 0;

    int max = tab[0];
    unsigned int i = 1;

    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return max;
}

int main()
{
    int arr[] = {1, 100, 70, 920, 21};
    printf("%d\n", max(arr, 5));
}
