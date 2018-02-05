#include<stdio.h>
int main()
{
int i,n,b[n];
printf("\n Enter the number of elements");
scanf("%d",&n);
printf("\n Enter the %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
printf("\n %d  %d",b[i],i);
}
return 0;
}

    
