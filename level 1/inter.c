#include <unistd.h>
#include <string.h>

int check(char *str, char c, int len)
{
	int i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);

}
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i = 0;
    
    if (ac == 3)
    {
        while (av[1][i])
        {
            if (!check(av[1], av[1][i], i) && check(av[2], av[1][i], ft_strlen(av[2])))
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
// #include <unistd.h>

// int check(char *str, char c, int len)
// {
//     int i = 0;
//     while (i < len)
//     {
//         if (str[i] == c)
//             return (1);
//         i++;
//     }
//     return (0);
// }

// int check_str(char *str, char c)
// {
//     int i = 0;
//     while (str[i])
//     {
//         if (str[i] == c)
//             return (1);
//         i++;
//     }
//     return (0);
// }

// int main(int ac, char **av)
// {
//     int i = 0;
    
//     if (ac == 3)
//     {
//         while (av[1][i])
//         {
//             if (!check(av[1], av[1][i], i) && check_str(av[2], av[1][i]))
//                 write(1, &av[1][i], 1);
//             i++;
//         }
//     }
//     write(1, "\n", 1);
//     return (0);
// }
