#include <stdio.h>

int main(void) {
char a[50];
int count=0;
int i;
scanf("%s",&a);
for(i=0;a[i]!=NULL;i++)
{
	if(a[i]>='0'&&a[i]<='9')
	{
	count++;
	}
	
}
printf("%d",count);
	return 0;
}
