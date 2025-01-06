#include <stdio.h>

int main()
{
 int number;
 char character;
 printf("Enter a number : ");
 scanf("%d", &number);
 if (number >= 0 && number <= 127)
 {
  character = (char)number;
  printf("'%c'\n", number, character);
 }
 else
 {
  printf("Invalid input! Please enter a number between 0 and 127.\n");
 }

 return 0;
}
