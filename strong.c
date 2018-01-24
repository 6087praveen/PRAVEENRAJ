#include <stdio.h>
int main()
{
int low, high, i, p1, p2, remainder, n = 0, result = 0;
printf("Enter two num(intervals): ");
scanf("%d %d", &low, &high);
printf("Armstrong num between %d an %d are: ", low, high);
for(i = low + 1; i < high; ++i)
{
p2 = i;
p1 = i;
while (p1 != 0)
{
p1 /= 10;
++n;
}
while (p2 != 0)
{
remainder = p2 % 10;
result += pow(remainder, n);
p2 /= 10;
}
if (result == i)
{
printf("%d ", i);
}
n=0;
result=0;
}
return 0;
}

