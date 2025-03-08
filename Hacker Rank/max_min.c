// WAP To find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
// Created on: 17 May 2021

#include <stdio.h>

int main()
{
 int a[5];
 for (int i = 0; i < 5; i++)
 {
  scanf("%d", &a[i]);
 }

 int min = a[0], max = a[0];
 long sum = 0;

 for (int i = 0; i < 5; i++)
 {
  sum += a[i];
  if (a[i] < min)
  {
   min = a[i];
  }
  if (a[i] > max)
  {
   max = a[i];
  }
 }

 printf("%ld ", sum - max);
 printf("%ld", sum - min);

 return 0;
}
