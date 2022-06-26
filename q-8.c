#include <stdio.h>

int main ()
{
    int a ,bill;
    printf("Enter your usage unit: ");
    scanf("%d",&a);
    if(a < 250)
    {
        bill = a * 4;
        printf("the bill is : %d taka",bill);
    }
    else if( a < 500)
    {
        bill = a * 6;
        printf("the bill is :%d taka ",bill);
    }
    else
    {
        bill = a * 9;
        printf("the bill is :%d taka ",bill);
    }
}
