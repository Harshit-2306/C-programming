#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[10];
    printf (" Enter a string: ");  
    scanf ("%s",str);  
    printf ("reverse string %s ", strrev(str));  
    return 0;  
}  