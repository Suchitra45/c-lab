#include <stdio.h>
int main()
{
    printf("SUCHITRA RANA\n");
    float length, width, height, surfaceArea;
    printf("Enter length width and height of cuboid\n");
    scanf("%f %f %f", &length,
        &width, &height);
    surfaceArea = 2*(length*width + width*height+ height*length);
    printf("Total surface area of Cuboid : %0.4f\n",
        surfaceArea);
    return 0;
}
