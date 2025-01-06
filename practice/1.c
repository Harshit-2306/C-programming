#include <stdio.h>

// Function to swap values using call by value
void swapByValue(int a, int b)
{
 int temp = a;
 a = b;
 b = temp;
 printf("Inside swapByValue - a: %d, b: %d\n", a, b);
}

// Function to swap values using call by reference
void swapByReference(int *a, int *b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

int main()
{
 int x = 10, y = 20;

 printf("Before swapByValue - x: %d, y: %d\n", x, y);
 swapByValue(x, y);
 printf("After swapByValue - x: %d, y: %d\n\n", x, y); // No change in values

 printf("Before swapByReference - x: %d, y: %d\n", x, y);
 swapByReference(&x, &y);
 printf("After swapByReference - x: %d, y: %d\n", x, y); // Values are swapped

 return 0;
}
