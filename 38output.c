#include<stdio.h>
int main(void)
{
int i,j;
printf("enter the values of i and j: ");
scanf("%d%d",&i,&j);
i=i^j;
j=i^j;
i=j^i;
printf("before swapping%d",i);
printf("after swapping%d",j);
return 0;
}
