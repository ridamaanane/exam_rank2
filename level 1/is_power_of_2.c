int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n /= 2;
    if (n == 1)
        return (1);
    return (0);
}
#include <stdio.h>
int main()
{
    printf("%d\n", is_power_of_2(16));
    printf("%d\n", is_power_of_2(0));
    printf("%d\n", is_power_of_2(2));
    printf("%d\n", is_power_of_2(30));
    printf("%d\n", is_power_of_2(1));
    printf("%d\n", is_power_of_2(32));
}