#include <stdio.h>
 void  main()
{
    int array[10], a, i, b;
    printf("\n give the size of the array: ");
    scanf("%d", &a);
    printf("\n give elements of  the array: ", a);
    for (i = 0; i < a; i++)
	scanf("%d", &array[i]);
b = array[0];
    for (i = 1; i < a; i++)
    {
	if (b<array[i])
	    b=array[i];
    }
    printf("\n largest element present in the given array is : %d", b);

}
