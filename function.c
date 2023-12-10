#include <stdio.h>

float areaofTriangle(float h1,float b1)
{
    return 0.5*h1*b1;
}
float areaofSq(float s)
{
    return s*s;
}
float areaofrect(float l,float b)
{
    return l*b;
}
float areaofcir(float r)
{
    return 3.14*r*r;
}
int main()
{
    printf("SUCHITRA RANA\n");
    int n;
    float area,x,y;
    printf("Enter:\n 1 for triangle\n 2 for Square\n 3 for Rectangle\n 4 for circle\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter height and base of Triangle\n");
        scanf("%f %f",&x,&y);
        area=areaofTriangle(x,y);
    }

    else if(n==2)
    {
        printf("Enter side of Square\n");
        scanf("%f",&x);
        area=areaofSq(x);
         printf("AREA OF SQUARE IS %f",area);
    }
    else if(n==3)
    {
        printf("Enter length and breadth of Rectangle\n");
        scanf("%f %f",&x,&y);
        area=areaofrect(x,y);
         printf("AREA OF RECTANGLE IS %f",area);
    }
    else if(n==4)
    {
        printf("Enter radius of Circle\n");
        scanf("%f ",&x);
        area=areaofcir(x);
         printf("AREA OF CIRCLE IS %f",area);
    }
    else
    printf("\n WRONG INPUT");
return 0;
}
