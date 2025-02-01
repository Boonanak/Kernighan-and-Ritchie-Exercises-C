#include <stdio.h>

#define MAXLINE 1000

/*
for starting at 0 as long as the current iteration is one less than the max and the character you
get from getchar is not EOF and not end of file, iterate by 1
  store that character in the current iteration of the line
  if that character is the newline character
    store that character in the current iteration of the line
    increment the iteration by 1
  set the current iteration of the line, (the one after the newline), to the null operator
  return the current iteration (note that the character array, line has been modifed by reference)
*/

int main()
{
    char line[MAXLINE];
    int i = 0;
    int c;

    // Leave room for null operator to be added
    while (i < MAXLINE - 1) {
        c = getchar();  

        if (c == EOF) {
            break;  
        }

        line[i] = c; 
        i++;

        if (c == '\n') {
            break;   
        }
    }

    line[i] = '\0';  
    printf("Line read: %s\n", line); 
    return i;  
}