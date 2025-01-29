#include <stdio.h>

#define MAXLINE 1000

/*
Write a program to print all input lines that are longer than 80 characters.

main, return 1 on success no param

  init counter
  init buffer with max line length 1000

  assign counter to 0

  for int i equals 0  until the c you get from getchar is not EOF increment i
    if c is newline character
        if counter is greater than 80 
            null terminate the buffer
            print the buffer

      clear buffer
      reset counter
    else
      if the current iteration is 1 less than the max line length
        set the value in the buffer to the current iteration of i++

      increment counter
*/
int main()
{
  char buffer[MAXLINE];  
  int i = 0;               
  int counter = 0;       
  int c;                 

  printf("Enter text (Ctrl+D to end):\n");

  while ((c = getchar()) != EOF) {
    if (c == '\n') { 
      if (counter > 80) {
        buffer[i] = '\0';  // Null-terminate the buffer
        printf("Line over 80 characters: %s\n", buffer);
      }

      i = 0;
      counter = 0;
    } else {
      if (i < MAXLINE - 1) {  // Avoid buffer overflow
        buffer[i++] = c;
      }
      counter++;
    }
  }

  // Handle the last line if it doesn't end with '\n'
  if (counter > 80) {
    buffer[i] = '\0';  // Null-terminate the buffer
    printf("Line over 80 characters: %s\n", buffer);
  }

  return 0;
}

