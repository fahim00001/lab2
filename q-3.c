#include <stdio.h>

int main ()
{
    float x,y;
    printf("Input two number for co-ordinate determine = ");
    scanf("%f%f",&x,&y);
    if( x > 0 && y>0)
    {
        printf("First co-ordinate");
    }
    else if(x<0 && y>0)
    {
        printf("second co-ordinate");
    }
    else if (x<0 && y<0)
    {
        printf("third co-ordinate");
    }
    else if (x>0 && y<0)
    {
        printf("(%f,%f)forth co-ordinate",x,y);
    }
    else if ( x == 0 && y > 0)
    {
        printf(" +y axis");
    }
    else if ( x == 0 && y < 0)
    {
        printf(" -y axis");
    }
    else if( y == 0 && x > 0 )
    {
        printf("+x axis");
    }
     else if( y == 0 && x < 0 )
    {
        printf("-x axis");
    }
    else
    {
        printf("point is on the center ");
    }
    return 0;
}

