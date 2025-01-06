#include <stdio.h>
int main()
{
 char a = 'A';
 void *p;
 p = &a;
 printf("%d", *(char *)p);
 return 0;
}
