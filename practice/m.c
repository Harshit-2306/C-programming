#include <stdio.h>
#include <string.h>


int main()
{
 typedef struct student
{
 char name[50];
 int roll_no;
 float marks;
} student;
 student a[4] =
 {
  {"abc", 1, 98.0},
  {"abc", 1, 98.0},
  {"abc", 1, 98.0},
 };

 for(int i=0;i<4;i++)
 {
 printf("Name: %s\n", a[i].name);
 printf("Roll No: %d\n", a[i].roll_no);
 printf("Marks: %.2f\n", a[i].marks);
 }
 return 0;
}
