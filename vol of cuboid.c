#include <stdio.h>
int main()
{
    printf("SUCHITRA RANA\n");
 float length, width, height, volume;
 printf("Enter length width and height of cuboid\n");
 scanf("%f %f %f", &length, &width, &height);
 volume = length*width*height;
 printf("Volume of Cuboid : %0.4f\n", volume);
 return 0;
}
