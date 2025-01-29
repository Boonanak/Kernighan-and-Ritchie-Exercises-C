#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float temp_convert(int fahr);

/*
main return int

print out header to temp convert program

for lower to upper inclusive
  call temp_convert with current fahr value and return corresponding celcius value
  print out said fahr value and returned celcius value 
*/
int main()
{
  int fahr;

  printf("Welcome to the temperature conversion program!\n");

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    float celc = temp_convert(fahr);
    printf("%3d %6.1f\n", fahr, celc);
  }
}

/*
temp_convert return int take int fahr

return float fahr converted to celcisus with included formula 
*/
float temp_convert(int fahr)
{
  return ((5.0 / 9.0) * (fahr - 32.0));
}