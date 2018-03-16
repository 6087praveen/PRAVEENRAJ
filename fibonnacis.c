#include <stdio.h>
int main()
{
    int a,b,c=1,d=1,e;

    printf("Enter the number : ");
    scanf("%d",&b);

    printf("Fibonacci Series: ");

    for (a=1;a<=b;++a)
    {
        printf("%d ",c);
        e=c+d;
        c=d;
        d=e;
    }
    return 0;
}
