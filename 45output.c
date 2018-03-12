#include <stdio.h>

int main(void) {
int n,m;
int count=0;
scanf("%d",&n);
while(n!=0)
{
    m=n%10;
    count++;
    n=n/10;
	}		

printf("%d",count++);
	return 0;
}
