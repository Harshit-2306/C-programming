// C program to demonstrate
// example of strrev() function

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "123456789";

    printf("The given string is =%s\n", str);

    printf("After reversing string is =%s", strrev(str));

    return 0;
}