#include<stdio.h>
int main()
{
int a,d,b,i;
int n;
scanf("%d %d %d",&a,&n,&d);
for(i=0;i<n;i++)
{
b=a+(i+d)+2;
printf("%d",b);
}
}
