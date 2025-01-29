#include <stdio.h>

#define MAX_ASCII 128

int main()
{
  /*
  init charcter variable
  init 128 long int frequency counter array for all characters in ASCII

  while the character you get is not EOF
    increment the character counter in its allotted location

  for each character in ASCII
    print that character
    print the frequency that character occurred
  */

  int c;
  int nchar[MAX_ASCII] = {0};// Intialize nchar array to 0 everywhere to avoid garbage values

  while ((c = getchar()) != EOF) {
    ++nchar[c];
  }

  for (int i = 0; i < MAX_ASCII; i++) {
    printf("%c %d\n", i, nchar[i]); //Can change first term to be %c or %d for a character or integer representation of the ASCII values
  }
}