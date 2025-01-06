#include<stdio.h>
int main()
{
 char c;
 printf("enter a character : ");
 scanf("%c",&c);
 if(c=='a'||c=='e'||c=='i'||c=="o"||c=='u')
 {
  printf("the given character is vowel ");
 }
else{
 printf("the given character are consonant");
}
 return 0;
}