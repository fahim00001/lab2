
#include <stdio.h>

int main ()
{
     int r ,l,volume_cube;
     float volume_sphere;
     printf("Inter radius of a sphere-shaped container = ");
      scanf("%d",&r);
     printf("Inter length of each side of the cubic container = ");
     scanf("%d",&l);
     volume_sphere = 4/3.0*3.1416 * r*r*r;
     volume_cube = l*l*l;
     printf("Cubic container will contain more water =%d\n",volume_cube);
     if(volume_sphere > volume_cube)
     {
         printf("sphere container will contain more water =%f ",volume_sphere);
     }
     else
     {
         printf("Cubic container will contain more water");
     }
     return 0;
}
