// WAP to print Diagonal Difference of 2-d array.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int n;
 scanf("%d",&n);
 int a[n][n];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 int sum1=0,sum2=0;
 for(int i=0;i<n;i++)
  {
  sum1+=a[i][i];
  sum2+=a[i][n-i-1];
  }
 printf("%d",abs(sum1-sum2));
 return 0;
}
