#include <stdio.h>
void swap(int *n, int *m)
{
 int temp;
 temp = *n;
 *n = *m;
 *m = temp;
 return;
}
int main()
{
 int a = 5;
 int b = 4;
 swap(&a, &b);
 printf("a = %d\n", a);
 printf("b = %d\n", b);
 return 0;
}
