#include <stdio.h>

int    get_index(char c, int base)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    if (c >= 'a' && c <= 'f' && base > 10)
        return (c - 'a' + 10);
    if (c >= 'A' && c <= 'F' && base > 10)
        return (c - 'A' + 10);
    return (-1);
}

int    ft_atoi_base(const char *str, int base)
{
    int    i;
    int    sign;
    int    result;
    int    digit;

    if (base < 2 || base > 16)
        return (0);
    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i])
    {
        digit = get_index(str[i], base);
        if (digit == -1 || digit >= base)
            break ;
        result = result * base + digit;
        i++;
    }
    return (result * sign);
}

#include <stdio.h>

int    main(void)
{
    printf("%d\n", ft_atoi_base("101", 2));        // 5
    printf("%d\n", ft_atoi_base("-1A", 16));       // -26
    printf("%d\n", ft_atoi_base("12fdb3", 16));    // 1243571
    printf("%d\n", ft_atoi_base("123", 10));       // 123
    printf("%d\n", ft_atoi_base("777", 8));        // 511
    printf("%d\n", ft_atoi_base("1101", 2));       // 13
    printf("%d\n", ft_atoi_base("Z23", 36));       // 0 (invalid base)
}