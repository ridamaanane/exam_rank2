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

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 7;
	int j = 0;
	unsigned char result = 0;
	while (i >= 0)
	{
		if ((octet >> j) & 1)
			result = result + (1 << i); 
		i--;
		j++;
	}
	return result;
}

int main()
{ 
	int n = 0b00100110;
	print_bits(reverse_bits(n));
}
