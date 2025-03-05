#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{

        if (ac == 2)
        {
                int prime = 2;
                int n = atoi(av[1]);
                if (n == 1)
                        printf("1");
                while (prime <= n)
                {
                        if (n % prime == 0)
                        {
                                putnbr(prime);
                                n = n / prime;
                                if (n != 1)
                                        printf("*");
                        }
                        else
                                prime++;
                }
        }
        printf("\n");
}