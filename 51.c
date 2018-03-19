#include<stdio.h>
int main()
{
  int n,a=0,b,remin;
  scanf("%d",&n);
while(n!=0)
{
  b=n%10;
  a=a*10+b;
  n=n/10;
}
while(a!=0)
{
  remin=a%10;
  printf("%d\t",remin);
 a=a/10;
  
}
return 0;
}
