#include<stdio.h>

int main() {
   char a[40];
   int i;
   int count=0;
   scanf("%[^\n]s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]==' ')
       {
    count++;
       }
   }
   printf("%d",count);
   return 0;
}
