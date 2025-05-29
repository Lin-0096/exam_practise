unsigned char	swap_bits(unsigned char octet)
{
    unsigned char right = octet & 0x0F;
    unsigned char left = octet & 0xF0;
    return(right << 4 | left >> 4);
}
// 

unsigned char	swap_bits(unsigned char octet)
{
    return(octet << 4 | octet >> 4);
}