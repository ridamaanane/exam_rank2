#include <unistd.h>

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
unsigned char	swap_bits(unsigned char octet)
{

	return ((octet >> 4) | (octet << 4));
}

int main()
{
	unsigned char octet = 	swap_bits(0b01000001);

	print_bits(octet);

}
