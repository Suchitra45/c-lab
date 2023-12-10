#include <stdio.h>
int main()
{
    float side, area;
    printf("Enter length of side of square\n");
    scanf("%f", &side);
    area = side * side;
    printf("Area of square : %0.4f\n", area);
    return 0;
}
