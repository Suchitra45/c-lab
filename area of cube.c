#include <stdio.h>
int main()
{
    float side, surfaceArea;
    printf("Enter length of any side of cube\n");
    scanf("%f", &side);
    surfaceArea = 6*side*side;
    printf("Total surface area of Cube : %0.4f\n",
        surfaceArea);
    return 0;
}
