#include <stdio.h>
int main ()
{
    int a,b,c,d,sum1,sum2
    ,result;
    printf("Input 4 digits of number : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum1 =(c+ d*10);
    sum2 =(a+ b*10);
    result = sum1-sum2;
    printf("%d",result);
    return 0;


}
