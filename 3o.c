#include<stdio.h>
int main()
{
    int hour1,hour2;
    int m1,m2,i,a,b,c,d,e;
    printf("enter the number");
    scanf("%d%d",&hour1,&m1);
     scanf("%d%d",&hour2,&m2);
     
    
     
a=(hour1*60+m1);
b=(hour2*60+m2);
c=a-b;
d=(c/60);
e=(c%60);
printf("%d %d",d,e);
return 0;
         
     
}
    
