#include <stdio.h>
#include <string.h>

int main()
{
 char str[100], length = 0;
 printf("enter an string : ");
 scanf("%[^\n]s", &str);

 while (str[length] != '\0')
 {
  length++;
 }
 int vowel = 0, consonant = 0;

 for (int i = 0; i < length; i++)
 {
  if (str[i] == 'a' || str[i] == 'e' || str[i] =='i' || str[i] == 'o' || str[i] == 'u')
  {
    vowel++;
  }
  else
  {
   consonant++;
  }
 }

 printf("the number of vowel present in sting = %d\n", vowel);
 printf("the number of consonant present in sting = %d\n\n", consonant);

 char str2[100], length2 = 0;
 printf("enter an string : ");
 scanf("%[^\n]s", &str2);

 while (str2[length2] != '\0')
 {
  length2++;
 }
for(int i=0;i<length2;i++)
{
 if(str[length] == str[length])
 {
  printf("the string are same : ");
 }
}

 return 0;
}