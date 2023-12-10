#include <stdio.h>
int main()
{
    printf("SUCHITRA RANA\n");
   float pie = 3.14;
   int radius;
   printf("Enter The Radius of Cricle:");
   scanf("%d",&radius);
   printf("The radius of the circle is %d\n" , radius);
   float area = (float)(pie* radius * radius);
   printf("The area of the given circle is %f", area);
   return 0;
}
