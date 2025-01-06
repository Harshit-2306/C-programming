#include <stdio.h>
#include <string.h>

// Structure to store student data
struct Student
{
 int roll_no;
 char name[50];
 float marks;
};

// Structure to store employee data
struct Employee
{
 int emp_id;
 char name[50];
 float salary;
};

int main()
{
 // Declare variables for student and employee
 struct Student student;
 struct Employee employee;

 // Input student details
 printf("Enter student details:\n");
 printf("Enter roll number: ");
 scanf("%d", &student.roll_no);
 getchar(); // to consume newline character left by scanf
 printf("Enter student name: ");
 fgets(student.name, sizeof(student.name), stdin);
 student.name[strcspn(student.name, "\n")] = '\0'; // remove newline character
 printf("Enter marks: ");
 scanf("%f", &student.marks);

 // Input employee details
 printf("\nEnter employee details:\n");
 printf("Enter employee ID: ");
 scanf("%d", &employee.emp_id);
 getchar(); // to consume newline character left by scanf
 printf("Enter employee name: ");
 fgets(employee.name, sizeof(employee.name), stdin);
 employee.name[strcspn(employee.name, "\n")] = '\0'; // remove newline character
 printf("Enter salary: ");
 scanf("%f", &employee.salary);

 // Display student details
 printf("\nStudent Details:\n");
 printf("Roll Number: %d\n", student.roll_no);
 printf("Name: %s\n", student.name);
 printf("Marks: %.2f\n", student.marks);

 // Display employee details
 printf("\nEmployee Details:\n");
 printf("Employee ID: %d\n", employee.emp_id);
 printf("Name: %s\n", employee.name);
 printf("Salary: %.2f\n", employee.salary);

 return 0;
}
