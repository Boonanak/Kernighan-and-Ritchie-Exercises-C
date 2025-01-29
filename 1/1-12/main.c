#include <stdio.h>

int main()
{
  int c, l;

  while ((c = getchar()) != EOF) {
    //If the character you get is blank or tab
      //Disregard it
    //Else
      //print it
      //set current to last 

    //If the last character you got was valid and the current is not
      //Move to newline

    if (c == ' ' || c == '\n' || c == '\t') {
      //disregard
    } else {
      putchar(c);
      l = c;
    }

    //Have to compare l and c to each possibility individually
    if ((l != ' ' && l != '\n' && l != '\t') && (c == ' ' || c == '\n' || c == '\t')) {
      putchar('\n');
    }

  }
}