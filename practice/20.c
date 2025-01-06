#include<stdio.h>
int main()
{
 int n;
 printf("enter an size of array ");
 scanf("%d",&n);
 printf("enter an element of array \n");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i])
 }
 for(int i=0;i<n-1;i++)
 {
  int s=i;
  for(int j=0;j<n;j++)
  {
   if(a[j]<a[s])
   {
    s=j;
   }
   int temp = a[i];
   a[i]=a[s];
   a[s]=temp;
  }
 }
 printf("sorted ")
 return 0;
}