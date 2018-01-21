#include <stdio.h>
 
int main()
{ 
    int n,m,o;
    int largest;
 
    printf("Enter three numbers (separated by space):");
    scanf("%d%d%d",&n,&m,&o);
 
    if(n>m && n>o)        
        largest=n;
    else if(m>n && m>o)       
        largest=m;
    else
        largest=o;
 
    printf("Largest number is = %d",largest);
 
    return 0;
}
