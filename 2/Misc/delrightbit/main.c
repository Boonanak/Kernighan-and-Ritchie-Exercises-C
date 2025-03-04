#include <stdio.h>

/*
    considering x is 48, (0b00110000)
    after the rightmost bit is cleared the result should be (ob00100000) or 32
*/
int main ()
{
    int x = 48;
    printf("x is initially: %d \n", x);

    x &= (x - 1);
    printf("After the rightmost 1-bit in x is cleared, x is: %d \n", x);
}

