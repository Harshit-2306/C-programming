#include <stdio.h>

int main()
{
 int a = 10;
 int *p;

 p = &a;
 printf("Value of a: %d\n", *p);

 printf("Address stored in p: %p\n", (void *)p);

 printf("Address of a: %p\n", (void *)&a);

 return 0;
}
