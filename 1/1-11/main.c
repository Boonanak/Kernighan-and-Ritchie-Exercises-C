#include <stdio.h>

#define IN 1
#define OUT 0

/*
You can test this program by entering in text of however many lines with various combinations of
tabs, spaces, and newlines. On einput that would definitely create a problem though would be when
a word is split up from line to line, even though it is just one word the program would interpret
it as two seperate words because they would be seperated by a \n character. This would cause the
state to be tripped to OUT in the second if statement.
*/
int main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}