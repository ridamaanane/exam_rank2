#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 12;
	int b = 14;

	printf("before swap [a = %d , b = %d]\n", a , b);
	ft_swap(&a, &b);
	printf("after swap [a = %d , b = %d]\n", a , b);
}
