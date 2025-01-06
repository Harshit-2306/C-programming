#include <stdio.h>
#include <stdlib.h>

void printPattern(int n)
{
 int size = 2 * n - 1; // Calculate the size of the square matrix
 for (int i = 0; i < size; i++)
 {
  for (int j = 0; j < size; j++)
  {
   // Calculate the minimum distance from the edges
   int min;
   if (i < j)
   {
    min = i;
   }
   else
   {
    min = j;
   }
   // min = min < size - i ? min : size - i - 1;
   if (min < size - i)
   {
    min;
   }
   else
   {
    min = size - i - 1;
   }
   // min = min < size - j ? min : size - j - 1;
   if (min < size - j)
   {
    min;
   }
   else
   {
    min = size - j - 1;
   }
   printf("%d ", n - min); // Print the appropriate number
  }
  printf("\n"); // Move to the next line
 }
}

int main()
{
 int n;
 printf("Enter the value of n:\n");
 scanf("%d", &n); // Input the value of n
 printPattern(n); // Call the function to print the pattern
 return 0;
}
