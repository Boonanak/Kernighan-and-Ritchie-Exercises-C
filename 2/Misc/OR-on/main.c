#include <stdio.h>

#define SETON 128 //set on bit 7

/*
0b10000000
0b
*/
int main ()
{
    int n = 65;
    printf("n is initially %d. \n", n);

    n = n | SETON;
    printf("After certain bit(s) are set on, n is %d. \n", n);

    return 0;
}