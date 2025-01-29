#include <stdio.h>

int main()
{
    int c, b, t, n;

    b = t = n = 0;

    printf("Enter text (Ctrl+D to end input on Linux/macOS or Ctrl+Z on Windows, follow ith enter):\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            b++;
        } else if (c == '\t') {
            t++; 
        } else if (c == '\n') {
            n++;
        }
    }

    printf("There are %d blank spaces, %d tabs, and %d newlines.\n", b, t, n); // Final output

    return 0;
}
