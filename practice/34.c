#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void *a, const void *b)
{
 return (*(int *)a - *(int *)b);
}

int main()
{
 int n;
 scanf("%d", &n);

 int *singers = (int *)malloc(n * sizeof(int));
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &singers[i]);
 }

 // Sort the array
 qsort(singers, n, sizeof(int), compare);

 // Count frequencies and find the maximum count
 int maxCount = 0, currentCount = 1, favouriteSingers = 0;
 for (int i = 1; i < n; i++)
 {
  if (singers[i] == singers[i - 1])
  {
   currentCount++;
  }
  else
  {
   if (currentCount > maxCount)
   {
    maxCount = currentCount;
    favouriteSingers = 1; // Reset favourite singers count
   }
   else if (currentCount == maxCount)
   {
    favouriteSingers++;
   }
   currentCount = 1; // Reset count for the new singer
  }
 }

 // Check the last group
 if (currentCount > maxCount)
 {
  maxCount = currentCount;
  favouriteSingers = 1;
 }
 else if (currentCount == maxCount)
 {
  favouriteSingers++;
 }

 printf("%d\n", favouriteSingers);

 free(singers);
 return 0;
}
