#include <stdio.h>
#include <stdlib.h>

int getMaxLength();
void printMaxLine(int maxLen);
void printArray(char arr[], int length);

/*
  main function, take no param and return int on successful run

  call getMaxLine function and get max line length

  call print max line function

*/
int main ()
{
  printf("Please enter your text you want the longest line of to be found!\n");

  int maxLen = getMaxLength();

  printMaxLine(maxLen);
}

/*
get max length, return int max length
  init counter and assign to 0
  init max char per line counter and assign to 0
  init c for character you get

  while what you get from getchar is not EOF
    if the character you get is a newline \n
      if the counter is less than the current max length
        set new max to the value of the counter
      reset counter
    else
      increment counter
  
  if the counter is less than the max length
    set the new max to the value of the counter

  return the maxLen found
*/
int getMaxLength() {
  int counter, maxLen, c;

  counter = maxLen = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      if (counter > maxLen) {
        maxLen = counter;
      }
      counter = 0;
    } else {
      counter++;
    }
  }

  if (counter > maxLen) {  // Last character does not end with a newline
    maxLen = counter;
  }

  return maxLen;
}

/*
  print max line, return nothing, take maxLen found

  init array for currentLine with length maxLen
  init c, currentLen, counter

  assign currentLen and counter to 0

  while what you get from getChar is not EOF
    if the character you get is \n
      reset currentLen
    else
      increment counter
      add c to currentLen array
    if currentLen equals maxLen
      *match found*
      call printArray to print currentLen array
    else
      overwrite old data if present 
*/

void printMaxLine(int maxLen) {
  // Dynamically allocate memory for currentLine based on maxLen
  char *currentLine = (char *)malloc(maxLen * sizeof(char)); 
  if (currentLine == NULL) {  // Check if malloc succeeded
    printf("Memory allocation failed!\n");
    return;
  }

  int c, counter = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') { 
      if (counter == maxLen) {
        printArray(currentLine, counter); 
      }
      counter = 0; 
    } else {
      if (counter < maxLen) {
        currentLine[counter++] = (char)c; 
      }
    }
  }
  
  // Handle last line if it doesn't end with a newline
  if (counter == maxLen) {
    printArray(currentLine, counter);
  }

  free(currentLine);
}

/*
  printArray function, return nothing and take char array

  for length of array
    print each character at that particular point in the array
*/
void printArray(char arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%c", arr[i]);  // Directly print the character
  }
  printf("\n");
}