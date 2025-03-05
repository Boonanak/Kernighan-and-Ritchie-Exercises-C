#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main ()
{
    int p = 5;
    int n = 3;
    unsigned x = 214;
    printf("x is initially: %d \n", x); //214 -> 0b11010110

    x = invert(x, p, n); //238 -> 0b11101110
    printf("After inverting the %d bits prior to and including position %d, x is now: %d \n", n, p, x);

    return 0;
}

/*
    return: unsigned x, the output number after inversion of some characters
    parameters: unsigned x, the input number to have some characters inverted
                int p, the position to begin inverting from
                int n, the number of bits from p to invert

                1. Create a mask for the range of bits we would like to invert

                2. Move the range into the desired location

                3. Invert the bits in this location, XOR
*/
unsigned invert(unsigned x, int p, int n)
{
    return(x ^ (~(~0 << n)) << (p + 1 - n)); //XOR is useful for inverting just a specific range of bits without modifying the rest
}