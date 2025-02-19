#include <unistd.h>
#include <stdio.h>
					
void    print_bits(unsigned char octet)
{
    int i = 7;
    char    var;

    while (i >= 0)
    {
        var = ((octet >> i) & 1) + '0';
        write(1, &var, 1);
        i--;
    }
}
unsigned char    reverse_bits(unsigned char octet)
{
    unsigned char    pocket = 0;
    int    i = 0;

    while (i <= 7)
    {
        pocket = (pocket << 1) | (octet >> i & 1);
        i++;
    }
    return (pocket);
}
unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7) | \
		   (((octet >> 1) & 1) << 6) | \
		   (((octet >> 2) & 1) << 5) | \
		   (((octet >> 3) & 1) << 4) | \
		   (((octet >> 4) & 1) << 3) | \
		   (((octet >> 5) & 1) << 2) | \
		   (((octet >> 6) & 1) << 1) | \
		   (((octet >> 7) & 1) << 0); 
}

int main()
{ 
	int n = 0b00100110;
	print_bits(reverse_bits(n));
}
