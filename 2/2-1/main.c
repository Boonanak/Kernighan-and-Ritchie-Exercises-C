#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // //char is special in c whether the default is signed or unsigned is dependent on the platform
    // printf("Min of plain char: %d\n", CHAR_MIN);
    // printf("Min of signed char: %d\n", SCHAR_MIN);
    // printf("Min of unsigned char: 0");

    // printf("Max of plain char: %d\n", CHAR_MAX);
    // printf("Max of signed char: %d\n", SCHAR_MAX);
    // printf("Min of unsigned char: %d\n", UCHAR_MAX);

    // //short is by default signed in c unless stated otherwise
    // printf("Min of plain/signed short: %d\n", SHRT_MIN);
    // printf("Max of plain/signed short: %d\n", SHRT_MAX);

    // printf("Min of unsigned short: %d\n", 0);
    // printf("Max of unsigned short: %d\n", USHRT_MAX);

    // //int is by default signed in c unless stated otherwise
    // printf("Min of plain/signed int: %d\n", INT_MIN);
    // printf("Max of plain/signed int: %d\n", INT_MAX);

    // printf("Min of unsigned int: %d\n", 0);
    // printf("Max of unsigned int: %d\n", UINT_MAX);

    // //long is by default signed in c unless stated otherwise
    // printf("Min of plain/signed long: %d\n", LONG_MIN);
    // printf("Max of plain/signed long: %d\n", LONG_MAX);

    // printf("Min of unsigned long: %d\n", 0);
    // printf("Max of unsigned long: %d\n", ULONG_MAX); 

    // //long long is by default signed in c unless stated otherwise
    // printf("Min of plain/signed long long: %d\n", LLONG_MIN);
    // printf("Max of plain/signed long long: %d\n", LLONG_MAX);

    // printf("Min of unsigned long long: %d\n", 0);
    // printf("Max of unsigned long long: %d\n", ULLONG_MAX);

    // //9 digits of precision
    // printf("Min normalized positive value of float: %d\n", FLT_MIN);
    // printf("Min denormalized positive value of float: %d\n", FLT_TRUE_MIN);
    // printf("Max value of float: %d\n", FLT_MAX);

    // //17 digits of precision
    // printf("Min normalized positive value of double: %d\n", DBL_MIN);
    // printf("Min denormalized positive value of double: %d\n", DBL_TRUE_MIN);
    // printf("Max value of double: %d\n", DBL_MAX);

    // //Same number of digits of precision as a double on Windows (MSVC)
    // printf("Min normalized positive value of long double: %d\n", LDBL_MIN);
    // printf("Min denormalized positive value of long double: %d\n", LDBL_TRUE_MIN);
    // printf("Max value of long double: %d\n", LDBL_MAX);

    //**Important Values**//
    //REMEMBER sizeof() returns how many BYTES a variable is. 1 byte is 8 bits which can represent 256 different values
    //NOTE using C17
    printf("These values of for Linux 64-bit architecture\n");
    printf("Size of int: %zu\n", sizeof(int)); //sizeof function returns a type of size_t, (%zu), which is treated as a unsigned long (%lu) on 64-bit Linux
    printf("Size of char: %zu\n", sizeof(char));
    printf("Size of boolean: %zu\n", sizeof(_Bool));
    printf("Size of pointer to an int: %zu\n", sizeof(int*)); //Notice how these both return the same value, regardless of the variable type, pointers just hold
    printf("Size of pointer to a char: %zu\n", sizeof(char*)); //memory addresses. All pointers are the same size reagrdless of the type they point to
}