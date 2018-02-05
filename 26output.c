#include<stdio.h>
void main()
{
int i,j,n,a[n],b,c;
printf("enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=n;j++)
{
for(c=j+1;c<=n;c++)
{
if(a[j]>=a[c])
{
b=a[j];
a[j]=a[c];
a[c]=b;
}
}
}
printf("%d\t",b);
}

