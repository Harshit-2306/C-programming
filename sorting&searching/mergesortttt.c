#include <stdio.h>
#include <stdlib.h>
void mergesort(int arr[],int left,int right)
{
 if(left<right)
 {
  int mid = left + (right-left) /2;
 }
}
int main()
{
 int n;
 printf("enter a number : ");
 scanf("%d", &n);
 int arr[n];
 for (int i = 0; i < n; i++)
 {
  printf("enter an array [%d]", i);
  scanf("%d", &arr[i]);
 }
 int a = sizeof(arr)/sizeof(arr[0]);
 mergesort(arr,0,a-1);
 return 0;
}