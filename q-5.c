#include <stdio.h>
int main ()
{
    int a ,i;
    printf("Input an integer number : ");
    scanf("%d",&a);
   if(a % 2 != 0 )
   {
       i = a + 2;
       printf("immediate odd number= %d",i);
       return 0;
   }
   else
   {
       i = a + 1;
       printf("Immediate odd number = %d",i);
       return 0;
   }
}

