#include <stdio.h>
int main()
{
 float side, volume;
 printf("Enter length of any side of cube\n");
 scanf("%f", &side);
 volume = side*side*side;
 printf("Volume of Cube : %0.4f\n", volume);
 return 0;
}
