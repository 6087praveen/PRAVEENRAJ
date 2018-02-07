#include <stdio.h>
int main()
{
int min,a,b;
scanf("%d",&min);
printf("Input\n %d \n",min);
a=(min % 60);
b=(min / 60);
printf("output\n %d %d",b,a);
	return 0;
}
