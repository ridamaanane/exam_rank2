#include <unistd.h>
#include <stdio.h>


void	print_bits(unsigned char octet)
{
	int i = 7;
	int var;
	while (i >= 0)
	{
		var = ((octet >> i) & 1) + '0';
		write (1, &var, 1);
		i--;
	}
}
int main()
{
	print_bits(0b00000010);
}
