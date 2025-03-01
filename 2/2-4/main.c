#include <stdio.h>

/*
Returns: nothing
Parameters: char *s1: pointer to first element of s1
            char *s2: pointer to first element of s2
    initialize i and j as ints    
    go through each character in s1
        initialize match found flag
        go through each character in s2
            if the character at that iteration of s2 is equal to the character at that iteration of s1
                set match flag to 1
                exit the inner for loop
        if the match flag is still zero, (no match has been found)
            set the value at the next index of s1 to the value at the current index of s2
*/
void squeeze(char *s1, char *s2, int l1, int l2)
{
    int i, j;
    for (i = 0; i < l1; i++) {
        int match = 0;
        for (int j = 0; j < l2; j++) {
            if (s2[i] == s1[j]) {
                match = 1;
                break;
            }
        }
        if (!match) {
            s1[i++] = s2[j];
        }
    }
}

/*
return 0 on successful run, no param
    declare string s1 and populate
    declare string s2 and populate
    get and store length of s1 array, l1
    get and store length of s2 array, l2
    call squeeze on s1, s2, l1, l2
    print s1
*/
int main ()
{
    char s1[] = "banana";
    char s2[] = "apple";
    int l1 = sizeof(s1) - 1;
    int l2 = sizeof(s2) - 1;

    printf("s1 is initially %s \n", s1);
    printf("s2 is initially %s \n", s2);

    squeeze(s1, s2, l1, l2);

    printf("s1 is now %s \n", s1);
    printf("s2 is still %s \n", s2);

    return 0;
}