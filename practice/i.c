#include <stdio.h>

int compareStrings(char str1[], char str2[])
{
 int i = 0;

 // Compare characters until a difference is found or the end of strings is reached
 while (str1[i] != '\0' && str2[i] != '\0')
 {
  if (str1[i] != str2[i])
  {
   return (str1[i] > str2[i]);
  }
  i++;
 }

 // If one string is longer than the other
 if (str1[i] == '\0' && str2[i] == '\0')
 {
  return 0; // Strings are equal
 }
 else if (str1[i] == '\0')
 {
  return -1; // str1 is shorter
 }
 else
 {
  return 1; // str2 is shorter
 }
}

int main()
{
 char str1[100], str2[100];

 // Input two strings
 printf("Enter the first string: ");
 scanf("%s", str1);
 printf("Enter the second string: ");
 scanf("%s", str2);

 // Compare the strings
 int result = compareStrings(str1, str2);

 // Output the comparison result
 if (result == 0)
 {
  printf("The strings are equal.\n");
 }
 else if (result > 0)
 {
  printf("The first string is greater.\n");
 }
 else
 {
  printf("The second string is greater.\n");
 }

 return 0;
}
