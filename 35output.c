#include<stdio.h>
int main()
{
	char c[100];
	int a=0,b=0,i;
	gets(c);
	for(i=0;c[i]!=NULL;i++)
	{
		if((c[i]>='0')&&(c[i]<='9'))
		a=++b;
	}
	printf("%d",a);
	return 0;
}  
