#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c , 1);
}

void print_hex(int n)
{
    char arr[] = "0123456789abcdef";
    if (n > 16)
        print_hex(n / 16);
    ft_putchar(arr[n % 16]);
}

int main(int ac, char **av)
{
    int n; 
   
    if (ac == 2)
    {
        n = atoi(av[1]);

        print_hex(n);
    }
}