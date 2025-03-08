#include <stdio.h>
int main()
{
 int n,i,j;
 scanf("%d", &n);
 int a[n];
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 int num;
 scanf("%d", &num);
 for (int i = 0; i < n; i++)
 {
  for (int j = i + 1; j < n; j++)
  {
   if (a[i] + a[j] == num)
   {
    printf("%d %d", a[i], a[j]);
    break;
   }
  }
 //  if (a[i] + a[j + 1] == num)
 //  {
 //   break;
 //  }
 //  else
 //  {
 //   continue;
 //  }
 //  break;
 }
 return 0;
}