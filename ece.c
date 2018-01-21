#include <stdio.h>
int main()
{
int c,d,e;
scanf("%d",&c);
scanf("%d",&d);
printf("Input \n %d %d\n",c,d);
printf("Output\n");
for(e=++c;e<d;e++)
{
if((e%2)!=0)
{
printf(" %d",e);	
}
}
return 0;
}
