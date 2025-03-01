#include <stdio.h>

/*
Returns: int: index of first location of ocurrance
Parameters: char *s1: pointer to first element of s1
            char *s2: pointer to first element of s2
            int l1: length of s1
            int l2: length of s2
  go through each character in s1
    go through each character in s2
      if the character in that iteration of s1 matches the character at that iteration of s2
        return that index
  return -1 if no match found
*/
int anyh(char *s1, char *s2, int l1, int l2) 
{

  for (int i = 0; i < l1; i++) {
    for (int j = 0; j < l2; j++) {
      if (s1[i] == s2[j]) {
        return i;
      }
    } 
  }

  return -1;
}

/*
return 0 on successful run, no param
  declare string s1 and populate
  declare string s2 and populate
  get and store length of s1 array, l1
  get and store length of s2 array, l2
  call anyh on s1, s2, l1, l2
  if the index returned is not -1
    print first index of ocurrence
  else
    print that no matches were found
*/
int main()
{
  char s1[] = "applebottom";
  char s2[] = "bot";
  int l1 = sizeof(s1) - 1;
  int l2 = sizeof(s2) - 1;

  int index = anyh(s1, s2, l1, l2);

  if (index != -1) {
    printf("The first occurence of s2 in s1 is at index %d. \n", index);
  } else {
    printf("No match found of any of the characters in s1 in s2. \n");
  }

  return 0;
}