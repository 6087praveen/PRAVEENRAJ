#include <stdio.h>
int main()
{
    int no, Number, rem, result = 0;
    scanf("%d", &no);
    Number = no;
    while (Number != 0)
    {
        rem = Number%10;
        result += rem*rem*rem;
        Number /= 10;
    }
    if(result == no)
        printf("Yes");
    else
        printf("No");
    return 0;

}
