#include<stdio.h>
#include<string.h>
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  s1.myNum = 10;
  s1.myLetter = 'A';
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s", s1.myString);
  printf("\n%d\n%c",s1.myNum,s1.myLetter);

  return 0;
}