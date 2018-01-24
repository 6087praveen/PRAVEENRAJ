#include<stdio.h>
int main()
{
int p,q,fact=1;
printf("enter the number: \n");
scanf("%d",&q);
for(p=1;p<=q;p++)
{
fact=fact*p;
}
printf("%d",fact);
return 0;
}
