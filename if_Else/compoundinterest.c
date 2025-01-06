#include <stdio.h>
#include <math.h>

int main()
{
 double principal, rate, time, compoundInterest;
 int n; // Number of times interest is compounded per year

 // Input values
 printf("Enter the principal amount: ");
 scanf("%lf", &principal);

 printf("Enter the annual interest rate (in percentage): ");
 scanf("%lf", &rate);

 printf("Enter the time (in years): ");
 scanf("%lf", &time);

 printf("Enter the number of times interest is compounded per year: ");
 scanf("%d", &n);

 // Calculate compound interest
 compoundInterest = principal * pow((1 + rate / (n * 100)), n * time);

 printf("Compound Interest after %.2lf years: %.2lf\n", time, compoundInterest);
 printf("Total Amount: %.2lf\n", compoundInterest);

 return 0;
}
