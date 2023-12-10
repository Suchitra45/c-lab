#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,area;
	printf("Enter the length of same sided: ");
	scanf("%f",&a);

	printf("Enter the side2 of the Triangle: ");
	scanf("%f",&b);
	area=(b*sqrt((4*a*a)-(b*b)))/4;
	printf("AOT: %f\n",area);
	return 0;
}
