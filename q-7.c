#include <stdio.h>
#include<math.h>
int main ()
{
    float a,b,c, root_1,root_2,d,realPart,imagPart;
    scanf("%f%f%f",&a,&b,&c);
    d = b*b -4*a*c;

     if (d < 0){
        realPart = -b /(2*a);
        imagPart = sqrt(-d)/(2*a);
        root_1= realPart+imagPart;
        root_2= realPart-imagPart;
        printf("root_1=%.2f\n",root_1);
        printf("root_2=%.2f\n",root_2);
        printf("two rational number is availabel");
     }
     else if (d > 0)
     {
          root_1= (-b+sqrt(d))/(2*a);
            root_2= (-b-sqrt(d))/(2*a);
            printf("root_1=%f\n",root_1);
            printf("root_2=%f\n",root_2);
         printf("real and different roots");
     }
     else
     {
          root_1= root_2= -b/(2*a);

            printf("root_1=%f\n",root_1);
            printf("real number and equal roots");
     }

    return 0;
}
