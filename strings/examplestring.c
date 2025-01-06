#include <stdio.h>
int main()
{
 char str[100];
 printf("Enter a string: ");
 scanf("%[^\n]s",str);
 puts("You entered:");
 puts(str);
 return 0;
}
