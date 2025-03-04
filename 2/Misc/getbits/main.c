#include <stdio.h>

/*
    int 10101100, 172
    then right shift x by 3, (5 + 1 - 3), (from left side of expression)
    x is now 00010101
    mask that with 00000111, (from right side of expression)
    result is 00000101 or 5
*/
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n); //remember to evaulate from left to right
}

int main()
{
    int p = 5; //position of the LEFTMOST bit we want
    int n = 3; //how many bits from the above point to the left
    unsigned x = 172; //number you are extracting bits from
    printf("x is initially: %d \n", x);

    x = getbits(x, p, n);
    printf("x is now: %d \n", x);
}