#include <stdio.h>

int main ()
{
    float term1,term2;
    printf("input two numbers indicating term1 and term2 : ");
    scanf("%d%d",&term1,&term2);
    if(term1 > term2)
    {
        printf("student gets higher marks at term1");
    }
    else
    {
        printf("student gets higher marks at term2");
    }
    return 0;
}
