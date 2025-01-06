#include <stdio.h>
#include <string.h>

struct Address
{
 char city[30];
 int zip;
};

struct Employee
{
 char name[50];
 struct Address address;
};

int main()
{
 // Declare and initialize an Employee
 struct Employee emp1;

 // Assign values
 strcpy(emp1.name, "John Doe");
 strcpy(emp1.address.city, "New York");
 emp1.address.zip = 10001;

 // Print the employee details
 printf("Employee Name: %s\n", emp1.name);
 printf("City: %s\n", emp1.address.city);
 printf("ZIP Code: %d\n", emp1.address.zip);

 return 0;
}
