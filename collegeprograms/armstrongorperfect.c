#include <stdio.h>
#include <math.h>
// Function prototypes
int isArmstrong(int n, int original, int numDigits);
int countDigits(int n);
int isPerfect(int n, int sum, int divisor);

// Main function
int main()
{
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);

 int numDigits = countDigits(num);

 // Check for Armstrong number
 if (isArmstrong(num, num, numDigits))
 {
  printf("%d is an Armstrong number.\n", num);
 }
 else
 {
  printf("%d is not an Armstrong number.\n", num);
 }

 // Check for Perfect number
 if (isPerfect(num, 0, 1))
 {
  printf("%d is a Perfect number.\n", num);
 }
 else
 {
  printf("%d is not a Perfect number.\n", num);
 }

 return 0;
}

// Function to count the number of digits in a number
int countDigits(int n)
{
 if (n == 0)
  return 0;
 return 1 + countDigits(n / 10);
}

// Function to check if a number is an Armstrong number using recursion
int isArmstrong(int n, int original, int numDigits)
{
 if (n == 0)
  return 0;
 int digit = n % 10;
 return pow(digit, numDigits) + isArmstrong(n / 10, original, numDigits) == original;
}

// Function to check if a number is a Perfect number using recursion
int isPerfect(int n, int sum, int divisor)
{
 if (divisor == n)
  return sum == n;
 if (n % divisor == 0)
  sum += divisor;
 return isPerfect(n, sum, divisor + 1);
}
