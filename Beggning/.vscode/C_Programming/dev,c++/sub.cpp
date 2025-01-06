#include<stdio.h>
int sub(int,int);
int main()
{
	int a,b,k;
	scanf("%d%d",&a,&b);
	k=sub(a,b);
	printf("%d",k);
	return 0;
}
int sub(int a,int b)
{return a-b;
}
