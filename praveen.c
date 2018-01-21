#include<stdio.h>
int main() 
{
int o,p,M,L,a=0;
scanf("%d",&M);
scanf("%d",&L);
printf("Input\n %d %d\n",M,L);
for(o=1;o<=M;o++)
{
printf("%d",o);
}
for(p=1;p<=L;p++)
{
a +=p;
}
printf("\nOutput\n %d \n",a);
return 0;
}
