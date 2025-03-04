#include <stdio.h>

/*
    x = 0b01101011   107
    y = 0b00110100   52
    p in x = 5 refers to 1 (leftmost point of position)
    n from y = 3, refers to 011

    Return: unsigned x: our output after setting
    Parameters:
        unsigned x: Our integer to be modifed, (set with a certain number)
        int p: the position in x to modify with bits
        int n: the number of bits from y to set in x
        unsigned y: the integer to set bits in x from

            1. extract the rightmost n bits from y
                take the unary of 0, all 1s
                shift this to the right by n
                take the unary of that to get all zeros except for the bits lower than and including n
                apply this mask to y

            2. clear the n bits in position p in x
                take the unary of 0, all 1s
                shift this to the right by n
                take the unary of that to get all zeros except for the bits lower than and including n
                shift this to the left by the desired position + 1 - the number you want to fill in
                take the unary of this so our mask is only 1 from p + 1 - n with all else being 0
                apply this mask to x

            3. shift the extracted bits from y into the position
                left shift the y by the sum of p + 1 - n, (into the correct position)
                use this to set those bits in x to be on using the bitwise or operator

*/
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    y = y & ~(~0 << n); //Part 1 extract rightmost n bits from y: Y

    x = x & ~(~(~0 << n) << (p + 1 - n)); //Part 2 clear n bits at position p in x: Y

    x = x | (y << (p + 1 - n)); // Part 3 shift the extracted bits from y into p in x: Y
    
    // printf("bits to extract from y: %d \n", y); //should be 100 or 4
    // printf("x result: %d \n", x); //should be 01000011 or 67

    return x;
}

int main()
{
    unsigned x = 107;
    unsigned y = 52;
    int p = 5;
    int n = 3;
    printf("x is initially: %d \n", x);

    x = setbits(x, p, n, y);
    printf("After being set by y: %d x is now: %d", y, x); //should be 01100011 or 99

    return 0;
}