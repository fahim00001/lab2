#include <stdio.h>

int main ()
{
    float x1,y1,x2,y2;
    printf("Input two number for co-ordinate determine = ");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    if ( y1 == 0 && y2 == 0)
    {
        printf("This two points fall +x same axis");
    }
    else if (x1 == 0 && x2 == 0)
    {
        printf("This two points fall +y same axis ");
    }
    else if ((y1== 0 && y2 == 0) && (x1 <0 && x2 < 0))
    {
        printf("this two points fall same axis -x axis");
    }
    else if ((x1==0 && x2 == 0)&& (y1< 0 && y2 < 0))
    {
        printf("This two points fall same axis -y");
    }
    else
    {
        printf("two points fall in center");
    }
    return 0;
}
