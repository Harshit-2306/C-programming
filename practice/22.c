#include <stdio.h>

int main()
{
 struct name
 {
  char name[20];
  char f_name[20];
  char m_name[20];
 };

 typedef struct student
 {
  struct name s1;
  int roll_no;
  int ph_no;
 } student;

 student stu;

 printf("Enter student information (Name Father_Name Mother_Name Roll_No Phone_No):\n");
 scanf("%19s %19s %19s %d %d", stu.s1.name, stu.s1.f_name, stu.s1.m_name, &stu.roll_no, &stu.ph_no);

 printf("\nStudent Details:\n");
 printf("Name: %s\n", stu.s1.name);
 printf("Father's Name: %s\n", stu.s1.f_name);
 printf("Mother's Name: %s\n", stu.s1.m_name);
 printf("Roll Number: %d\n", stu.roll_no);
 printf("Phone Number: %d\n", stu.ph_no);

 return 0;
}
