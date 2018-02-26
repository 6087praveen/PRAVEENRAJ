#include <stdio.h>

int main(void) {
int b[100],i,max;

for(i=0;i<10;i++)
{
	scanf("%d",&b[i]);
	max=b[0];
}
for(i=0;i<10;i++)
{
	if(b[i]>max)
	{
	max=b[i];
	}
}
printf("%d",max);
	return 0;
}

