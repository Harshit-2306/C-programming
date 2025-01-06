#include <stdbool.h>
#include <stdio.h>

// Function to check whether any pair exists
// whose sum is equal to the given target value
bool twoSum(int arr[], int n, int target)
{

 // Iterate through each element in the array
 for (int i = 0; i < n; i++)
 {

  // For each element arr[i], check every
  // other element arr[j] that comes after it
  for (int j = i + 1; j < n; j++)
  {

   // Check if the sum of the current pair
   // equals the target
   if (arr[i] + arr[j] == target)
    return true;
  }
 }
 // If no pair is found after checking
 // all possibilities
 return false;
}

int main()
{

 int arr[] = {0, -1, 2, -3, 1};
 int target = -2;
 int n = sizeof(arr) / sizeof(arr[0]);

 // Call the twoSum function and print the result
 if (twoSum(arr, n, target))
  printf("true\n");
 else
  printf("false\n");

 return 0;
}