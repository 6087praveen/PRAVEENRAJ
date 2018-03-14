#include<stdio.h>
int main()
{
int b,c[50],sum=0,avg,i;
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<b;i++)
{
sum=sum+c[i];
}
avg=sum/b;
printf("%d",avg);
return 0;
}
