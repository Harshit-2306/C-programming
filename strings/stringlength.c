#include <stdio.h>

int main()
{
 char str[100];  // Array to store the input string
 int length = 0; // Variable to hold the length of the string

 // Prompt the user for input
 printf("Enter a string: ");
 scanf("%[^\n]", str); // Reads the input string, including spaces, until a newline is encountered
//gets(str);
 // Iterate through the string until the null terminator ('\0') is encountered
 while (str[length] != '\0')
 {
  length++;
 }

 // Output the length of the string
 printf("The length of the string is: %d\n", length);

 return 0;
}
