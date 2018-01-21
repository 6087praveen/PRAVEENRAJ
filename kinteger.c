#include<stdio.h>
int main() 
{
int i,j,N,K,b=0;
scanf("%d",&N);
scanf("%d",&K);
printf("Input\n %d %d\n",N,K);
for(i=1;i<=N;i++)
{
printf("%d",i);
}
for(j=1;j<=K;j++)
{
b +=j;
}
printf("\nOutput\n %d \n",b);
return 0;
}
