#include <stdio.h>
int main()
{
    int a, n, b1 = 1, b2 = 1, c;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (a = 1; a <= n; ++a)
    {
        printf("%d, ", b1);
        c= b1 + b2;
        b1 = b2;
        b2 = c;
    }
    return 0;
}
