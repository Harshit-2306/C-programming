#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);    
    if(n%5==0){
        printf("it is divisble");
    }
    else{
        printf("it is not divisble");
    }
    
    return 0;
}