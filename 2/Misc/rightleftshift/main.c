#include <stdio.h>

/*
    initially 35, (0b00100011)
    then 0b10001100, (152)
    then 0b0001001, (9)

    you can perform bit shifts on signed values but it is generally not preferred,
    (especially left shifts as the sign bit, MSB, can be changed), because this leads
    to undefined behavior. When you provide bit shifts on unsigned values though if the
    shifts cause bits to be out of bounds they are either lost, (right shift), or 
    filled with  0s, (left shift)

    generally speaking left shift typically, (because bits can overflow to the left),
    makes ints larger and right shift always makes them smaller
*/
int main()
{
    unsigned x = 35; 
    printf("x is initially: %d \n", x);

    x <<= 2;
    printf("After shifting left by 2 positions, x is now: %d \n", x);

    x >>= 3;
    printf("After shifting right by 3 positions, x is now: %d \n", x);

    return 0;
}