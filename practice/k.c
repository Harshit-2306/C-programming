#include <stdio.h>
#include <math.h> // For the pow function

int main()
{
 float principal, rate, time, simpleInterest, compoundInterest;

 // Taking input from the user
 printf("Enter the Principal amount: ");
 scanf("%f", &principal);

 printf("Enter the Rate of Interest (per annum in percentage): ");
 scanf("%f", &rate);

 printf("Enter the Time (in years): ");
 scanf("%f", &time);

 // Calculate Simple Interest
 simpleInterest = (principal * rate * time) / 100;

 // Calculate Compound Interest
 compoundInterest = principal * pow((1 + rate / 100), time) - principal;

 // Display the results
 printf("Simple Interest = %.2f\n", simpleInterest);
 printf("Compound Interest = %.2f\n", compoundInterest);

 return 0;
}
