#include <stdio.h>
#include <stdint.h>

/*
Init array of hexbytes
Get size of hexbytes array

iterate through all hex bytes as long as i is less than the size of all hex bytes
  print that hex byte

*/
int main()
{
  uint8_t hexbytes[] = {0x83, 0x65, 0x61, 0x6E};
  size_t numhexbytes = sizeof(hexbytes) / sizeof(hexbytes[0]);
  uint32_t eqIntVal = 0;

  printf("Hexstring: ");
  for (int i = 0; i < numhexbytes; i++) {
    printf("%02X", hexbytes[i]);
  }
}