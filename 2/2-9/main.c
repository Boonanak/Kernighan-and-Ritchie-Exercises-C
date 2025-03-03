#include <stdio.h>
#include <time.h>

int bitcount1(unsigned x);
int bitcount2(unsigned x);

/*

*/
int main ()
{
    unsigned x = 125; //change this to test

    clock_t start, end;
    double time1, time2;

    //measure bitcount1
    start = clock();
    int c = bitcount1(x);
    end = clock();
    time1 = (double)(end - start) / CLOCKS_PER_SEC;

    //measure bitcount2
    start = clock();
    int d = bitcount2(x);
    end = clock();
    time2 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("bitcount1 returned: %d and took: %e seconds\n", c, time1); //%e used because CLOCKS_PER_SEC
    printf("bitcount2 returned: %d and took: %e seconds\n", d, time2); //can often return very large values
}

int bitcount1(unsigned x)
{
    int b;

    for (b = 0; x != 0; x >>= 1) {
        if (x & 01) {
            b++;
        }
    }
    return b;
}

int bitcount2(unsigned x)
{
    int b = 0;
    //code here
    return b;
}

