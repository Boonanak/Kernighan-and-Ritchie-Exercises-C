#include <stdio.h>

int main()
{
  int c, l = 0;

  printf("Enter text:\n");

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (l != ' ') {
        putchar(c);
      }
    } else {
      putchar(c);
    }
    l = c;
  }
  printf("\n");
}