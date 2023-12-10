#include<stdio.h>
int main()
{
    printf("SUCHITRA RANA\n");
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks>=85 && marks<=100)
    {
        printf("Grade 10");
    }
    else if(marks>=75 && marks<85)
    {
        printf("Grade 9");
    }
    else if(marks>=65 && marks<75)
    {
        printf("Grade 8");
    }
    else if(marks>=55 && marks<65)
    {
        printf("Grade 7");
    }
    else if(marks>=50 && marks<55)
    {
        printf("Grade 6");
    }
    else if(marks>=40 && marks<50)
    {
        printf("Grade 6");
    }
    else
    {
        printf("FAIL!");
    }
}
