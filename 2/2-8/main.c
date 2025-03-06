#include <stdio.h>
#include <stdint.h>

uint8_t rightrot(uint8_t x, int n);

int main ()
{
    uint8_t x = 203;
    int n = 3;
    printf("x is initially: %d \n", x); //0b11001011

    x = rightrot(x, n);
    printf("After being rotated right by %d spots, x is now: %d \n", n, x); //0b01111001 -> 121

    return 0;
}

/*
    1. Get the first n bits of x
        Create a mask at the first n bits
        Use this mask to copy the values of these n bits and store in some variable
    2. Rotate the bits of x to the right by n with >> operator
        shift entirety of x to the right by n, (losing the stored bits in lostbits)
        shift lostBits to the left end
        turn on these bits with the bitwise or operator |
*/
uint8_t rightrot(uint8_t x, int n)
{
    uint8_t lostBits = 0;

    lostBits = x & ~(~0 << n);

    x = x >> n;

    lostBits = lostBits << (8 - n);

    return(x | lostBits);
}