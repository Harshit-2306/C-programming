#include<stdio.h>
#include<string.h>
int main()
{
 typedef struct book{
  char name[20];
  float price;
  int numbe_of_pages;
 }book;
book a;
a.numbe_of_pages=200;
a.price=298.22;
strcpy(a.name,"Harry potter");
printf("number of pages = %d\n",a.numbe_of_pages);
printf("name of = %s\n",a.name);
printf("price of = %f",a.price);
 return 0;
}
