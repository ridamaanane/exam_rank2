#include <stdlib.h>
#include <stdio.h>

int main(int argc , char **av)
{
        int i = 2;
        if (argc == 2)
        {
        	int n = atoi(av[1]);
                if (n == 1)
                        printf("1\n");
                while(i <= n)
                {
                        if (n % i == 0)
                        {
                                printf("%d", i);
                                if (n != i)
                                        printf("*");
                                n = n / i;
                        }
                        else
                                i++;
                }
        }
        printf("\n");
}
