#include <stdio.h>

/*
Returns: nothing
Parameters: char *s1: pointer to first element of s1
            char *s2: pointer to first element of s2
    initialize i and j and k as ints and set to 0    
    go through each character in s1 until the null terminator, (end), is found
        initialize match found flag and set to 0
        go through each character in s2 until the null terminator, (end), is found
            if the character at that iteration of s1 is equal to the character at that iteration of s2
                set match flag to 1
                exit the inner for loop
        if the match flag is still zero, (no match has been found)
            set the value at the next index of s1 at k to the value at the current index of s1
    null terminate the index of k in s1, (the end)
*/
void squeeze(char *s1, char *s2) {
    int i, j, k = 0;

    for (i = 0; s1[i] != '\0'; i++) {
        int match = 0;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                match = 1;
                break;
            }
        }
        if (!match) {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
}

/*
return 0 on successful run, no param
    declare string s1 and populate
    declare string s2 and populate
    print s1 and s2
    call squeeze on s1, s2, l1, l2
    print s1 and s2 after modification (only s1 will have changed)
*/
int main() {
    char s1[] = "ooo";
    char s2[] = "aeiou";

    printf("s1 is initially: %s\n", s1);
    printf("s2 is initially: %s\n", s2);

    squeeze(s1, s2);

    printf("s1 is now: %s\n", s1);
    printf("s2 is still: %s\n", s2);

    return 0;
}