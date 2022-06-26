#include <stdio.h>
int main ()
{
    int x,y,ans = 1;
    printf("enter base and exponent value: ");
    scanf("%d%d",&x,&y);
    int i = 1;
    while (i <= y)
    {
         ans = ans * x;
         i++;
    }
     printf("%d",ans);
    return 0;

}
