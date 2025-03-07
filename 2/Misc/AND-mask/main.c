#include <stdio.h>

#define MASK 55

/*
55 is  0b00110111
103 is 0b01100111 <-- our mask, (masking off bits 6, 7, 2, 1, 0)
out is 0b00100111 or 39

the bitwise and functions as an gate at the bit level
if n is considered to be the "mask" you purposefully mask of certain bits 
*/
int main ()
{
    int n = 103;
    printf("n is initally %d. \n", n);

    n = n & MASK;
    printf("Now after masking using bitwise and, n is %d. \n", n);

    return 0;
}