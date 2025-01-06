#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b,k;
	scanf("%d%d",&a,&b);
	k=sum(a,b);
	printf("%d",k);
	return 0;
}
int sum(int x,int y)
{return x+y;
}
