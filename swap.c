#include<stdio.h>
int main()
{
	int a,b,temp=0;
	scanf("%d",&a);
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",b,a);
	return 0;
}
