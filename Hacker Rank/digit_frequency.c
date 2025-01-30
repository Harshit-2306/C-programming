// WAP TO PRINT A DIGIT FREQUENCY
#include <stdio.h>
int main()
{
 char s[1000];
 int i;
 int freq[10] = {0};
 printf("Enter a string :");
 scanf("%s", s);
 for (i = 0; s[i] != '\0'; i++)
 {
  if (s[i] >= '0' && s[i] <= '9')
  {
   freq[s[i] - '0']++;
  }
 }
 for (i = 0; i < 10; i++)
 {
  printf("%d occurs %d times \n", i, freq[i]);
 }
 return 0;
}