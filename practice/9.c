#include <stdio.h>
#include <string.h>

int main()
{
 int n;
 printf("Enter the size of the string: ");
 scanf("%d", &n);

 // Clear the input buffer
 while (getchar() != '\n');

 char str[n + 1]; // Extra space for null terminator

 printf("Enter the string: ");
 fgets(str, sizeof(str), stdin); // Safer alternative to gets()

 // Remove the newline character if present
 size_t len = strlen(str);
 if (len > 0 && str[len - 1] == '\n')
 {
  str[len - 1] = '\0';
 }

 printf("You entered: %s\n", str);

 return 0;
}
