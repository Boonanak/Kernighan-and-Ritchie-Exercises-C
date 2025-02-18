#include <stdio.h>
#include <stdint.h>

/*
Init array of hexbytes
Init array of the integer representation of the hexbytes

call htoi function to return int representation of hexbyte array

print int represention (show the parts of this)
*/
int main()
{
  uint8_t hexbytes[] = {0x83, 0x65, 0x61, 0x6E, 0xFF};
  size_t size = sizeof(hexbytes) / sizeof(hexbytes[0]);

  printf("Hexbytes Representaton\n");
  for (int i = 0; i < size; i++) {
    printf("%02X ", hexbytes[i]);
  }

  printf("\nInteger Representation\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", hexbytes[i]);
  }

  return 0;
}