#include <stdio.h>

int main()
{
  float fahr, celsius, lower, upper, step;

  lower = -17.8;
  upper = 148.9;
  step = 11.1;

  celsius = lower;

  printf("Welcome to the temperature program\n");
  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5.0) + 32.0;
    printf("%4.1f %4.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}