#include <stdio.h>

#define MAXLEN 1000

void reverse(char s[]);

/*
main, return 1 on successful run, take no param

  init i, set to 0
  init c
  init char array "line" of MAXLEN

  while the c you get from getchar is not EOF
    if c equals newline
      null terminate the string
      call reverse function on the "line" array you have constructed
      reset i to 0
    else
      add the value at c to position i in the char array
      increment i

*/
int main()
{
  char c;
  int i = 0;
  char line[MAXLEN];

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      line[i] = '\0';
      reverse(line);
      printf("Reversed: %s\n", line);
      i = 0;
    } else {
      line[i] = c;
      i++;
    }
  }

  return 1;
}

/*
reverse, return nothing, take char array as param

  init length and set to 0

  while the value of the string is not the null operator
    increment length by 1

  for int i equals 0 as long as i is less than half of the length, incremnt i++
    init temp char variable and have it hold the char at pos i in the string
    set the char at pos i in string to hold the value at the end of the string minus 1
    update what was at the end of the string with the char held in temp
*/
void reverse(char s[])
{
  int l = 0;

  while (s[l] != '\0') {
    l++;
  }

  for (int i = 0; i < l / 2; i++) {
    char temp = s[i];
    s[i] = s[l - i - 1];
    s[l - i - 1] = temp;
  }
}