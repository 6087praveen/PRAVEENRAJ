#include <stdio.h>

int main()
{
    int a[30];
    int b;
    int i, j, temp;
            scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<b;i++)
    {
            for(j=i+1;j<b;j++)
        {
                if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j] = temp;
            }
        }
    }

            for(i=0; i<b; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
