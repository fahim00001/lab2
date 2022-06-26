#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf("Input three integers angles to check it's equilateral or right-angle: ");
    scanf("%d%d%d",&a,&b,&c);
    d = a+b+c;
    if(d == 180){
     if(a==90 && b==90 && c==90)
    {
        printf("This is an equilateral triangle\n");
    }
    else if(a == 90 || b==90 || c == 90 )
    {
        printf("This is an right-angle triangle\n");
    }

    else
    {
        printf("None of any those two types triangle\n");
    }
    }
    else
    {
        printf("triangle value worng");
    }
    return 0;
}
