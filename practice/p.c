#include <stdio.h>
struct address
{
 char city[20];
 int pin;
 char phone[10];
};
struct employee
{
 char name[10];
 struct address add;
};
void main()
{
 struct employee emp;
 printf("enter employee info");
 scanf("%s %s %d %d", emp.name, emp.add.city, emp.add.phone, emp.add.pin);
 printf("Info to be displayed");
 printf("name : %s\n city : %s\n pincode : %d\n phone : %d",emp.name,emp.add.city,emp.add.phone,emp.add.pin);
}