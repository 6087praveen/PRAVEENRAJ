#include<stdio.h>
int main() 
{
int a,b,P,Q,c=1;
scanf("%d",&P);
scanf("%d",&Q);
printf("Input\n%d %d\n",P,Q);
for(a=1;a<=Q;a++)
{
c=(c*P);
}
printf("Output\n%d ",c);
return 0;
}
