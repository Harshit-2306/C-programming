#include<stdio.h>
void next_largest_element(int arr[], int n)
{
 int res[n],i,j;
 for(int i=0;i<n;i++)
 {
  for(int j=i+1;j<n;j++)
  {
   if(arr[i]<arr[j])
   {
    res[i]=arr[j];
    break;
   }
  }
  // if(j==n)
  // {
  // res[i]=-1;
  // }
 }
   if(j==n)
  {
  res[i]=-1;
  }
 for(int i=0;i<n;i++)
{
 printf(" %d",res[i]);
}
//  return res[n];
}
int main()
{
 int n;
 scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
next_largest_element(arr,n);
// for(int i=0;i<n;i++)
// {
//  printf("%d",arr[i]);
// }
return 0;
}