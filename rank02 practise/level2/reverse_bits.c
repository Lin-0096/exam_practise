#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char res = 0;
    while(i < 8)
    {
        res = (res << 1) | (octet & 1);
        octet >>= 1;
        i++;
    }
    return (res);
}
void	print_bits(unsigned char octet)
{
	int i = 7;
    while(i >= 0)
    {
        if(((octet >> i) & 1) == 1)
            write(1, "1", 1);
        else if (((octet >> i) & 1) == 0)
            write(1, "0", 1);
        i--;
    }
}
#include <stdio.h>

int main(void)
{
    unsigned char octet = 1;
    char res = reverse_bits(octet);
    print_bits(res);
}