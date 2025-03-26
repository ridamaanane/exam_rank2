#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_prime(int a)
{
    int i = 2;
    while (i < a)
    {
        if (a % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = atoi(av[1]);
        int sum = 0;
        
        while (n >= 2)
        {
            if (is_prime(n))
                sum += n;   
            n--;
        }
        printf("%d", sum);
    }
    else
        printf("0");

    printf("\n");
}