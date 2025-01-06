#include<stdio.h>
int main()
{
    int a=2,b=4,result;
    result =(a==b);
    printf("(a==b)=%d\n",result);
    result=(a<b);
    printf("(a<b)=%d\n",result);
    result=(a>=b);
    printf("(a>=b)=%d\n",result);
    return 0;
}