#include <stdio.h>
int main()
{
    int a[50];
    int b;
    int i, j, temp;
            scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<b;i++)
    {
            for(j=i;j<b;j++)
        {
                if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d",a[b/2]);
    return 0;
}
