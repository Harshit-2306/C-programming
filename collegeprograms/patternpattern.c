#include <stdio.h>

int main()
{
 int i, j, rows;
printf("enter a rows ");
scanf("%d",&rows);
 for (i = rows; i >= 1; i--)
 {
  for (j = 1; j <= rows - i; j++)
  {
   printf(" ");
  }
  for (j = 1; j <= i; j++)
  {
   printf("* ");
  }
  printf("\n");
 }
 for (i = 2; i <= rows; i++)
 {
  for (j = 1; j <= rows - i; j++)
  {
   printf(" ");
  }
  for (j = 1; j <= i; j++)
  { 
   printf("* ");
  }
  printf("\n");
 }

 return 0;
}
