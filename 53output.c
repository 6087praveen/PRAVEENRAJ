#include<stdio.h>
int main()
{
	int a,n,b=0;
	scanf("%d",&a);
	while(a!=0)
	{
	n=a%10;
	b+=n;

	a/=10;
	}
		printf("%d",b);
	return 0;
}
