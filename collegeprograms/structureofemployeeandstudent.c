#include <stdio.h>
#include<string.h>
int main()
{
 typedef struct student
{
 char name[50];
 int rollnumber;
 float marks;
 int ID_numer;
 int salary;
}student;

 student in;
 in.marks = 18.5;
 strcpy(in.name,"travis_head");
 in.rollnumber = 159;
 printf("Student information:\n");
 printf("Name: %s\n", in.name);
 printf("Marks: %f\n", in.marks);
 printf("Roll Number: %d\n", in.rollnumber);
 return 0;
}