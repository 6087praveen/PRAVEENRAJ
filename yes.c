#include <stdio.h>

int main() {

  int a,sum=0,temp;    
  int m; 
  scanf("%d",&m);
  printf("INPUT\n%d",m);
  temp=m;    
  while(m>0){    
   a=m%10;    
   sum=(sum*10)+a;    
   m=m/10;    
  }    
  if(temp==sum)    
  printf("\nOUTPUT\nyes");    
  else    
  printf("\nOUTPUT\nno");    
	return 0;
}
