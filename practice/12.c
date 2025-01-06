#include <stdio.h>

int main()
{

 int a[5]={2,5,7,3,4};
 int target;
 printf("enter an target : ");
 scanf("%d", &target);
 for (int i = 0; i < 5; i++)
 {
  for (int j = 0; j < 5; j++)
  {
   if (a[i] + a[j] == target)
   {
    printf("[%d %d]", i, j);
    return 0;
   }
  }
 }
 return 0;
}