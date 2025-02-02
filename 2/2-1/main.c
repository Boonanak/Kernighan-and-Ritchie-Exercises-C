#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    //char is special in c, whether the default is signed or unsigned is dependent on the platform
    printf("Min of plain char: %d\n", CHAR_MIN);
    printf("Min of signed char: %d\n", SCHAR_MIN);
    printf("Min of unsigned char: 0");

    printf("Max of plain char: %d\n", CHAR_MAX);
    printf("Max of signed char: %d\n", SCHAR_MAX);
    printf("Min of unsigned char: %d\n", UCHAR_MAX);

    //short is by default signed in c unless stated otherwise
    printf("Min of plain/signed short: %d\n", SHRT_MIN);
    printf("Max of plain/signed short: %d\n", SHRT_MAX);

    printf("Min of unsigned short: %d\n", 0);
    printf("Max of unsigned short: %d\n", USHRT_MAX);

    //int is by default signed in c unless stated otherwise
    printf("Min of plain/signed int: %d\n", INT_MIN);
    printf("Max of plain/signed int: %d\n", INT_MAX);

    printf("Min of unsigned int: %d\n", 0);
    printf("Max of unsigned int: %d\n", UINT_MAX);

    //long is by default signed in c unless stated otherwise
    printf("Min of plain/signed long: %d\n", LONG_MIN);
    printf("Max of plain/signed long: %d\n", LONG_MAX);

    printf("Min of unsigned long: %d\n", 0);
    printf("Max of unsigned long: %d\n", ULONG_MAX); 

    //long long is by default signed in c unless stated otherwise
    printf("Min of plain/signed long long: %d\n", LLONG_MIN);
    printf("Max of plain/signed long long: %d\n", LLONG_MAX);

    printf("Min of unsigned long long: %d\n", 0);
    printf("Max of unsigned long long: %d\n", ULLONG_MAX); 

}