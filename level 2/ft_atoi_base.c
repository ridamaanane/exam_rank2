int    ft_check(char *str, char c)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int    ft_strlen(char *str)
{
    int    ln;

    ln = 0;
    while (str[ln] != '\0')
    {
        ln++;
    }
    return (ln);
}

int    ft_invalid(char *check)
{
    int    tol;
    int    i;

    tol = ft_strlen(check);
    i = 0;
    if (tol < 2)
        return (0);
    while (i < tol)
    {
        if (check[i] == '+' || check[i] == '-')
            return (0);
        if (ft_check(check + i + 1, check[i]))
            return (0);
        i++;
    }
    return (1);
}

int    ft_get_index(char *base, char c)
{
    int    i;

    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int    ft_atoi_base(char *str, char *base)
{
    int    i;
    int    sign;
    int    res;
    int    tol;
    int    digit;

    tol = ft_strlen(base);
    if (!ft_invalid(base))
        return (0);
    i = 0;
    res = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            sign *= -1;
    while (str[i] != '\0')
    {
        digit = ft_get_index(base, str[i++]);
        if (digit == -1)
            break ;
        res = res * tol + digit;
    }
    return (sign * res);
}
/*
#include <stdio.h>

int    main()
{
    printf("%d", ft_atoi_base("2371", "01234567"));
}*/
