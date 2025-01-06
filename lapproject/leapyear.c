#include <stdio.h>
int main()
{
 int year;
 printf("enter a year : ");
 scanf("%d", &year);
 if (year % 4 == 0 && year / 400)
 {
  printf("the given year is leap year");
 }
 else
 {
  printf("the given year is not a leap year");
 }
 return 0;
}