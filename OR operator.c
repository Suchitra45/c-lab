#include <stdio.h>
int main()
{
printf("SUCHITRA RANA \n");
int num;
printf("Enter any number: ");
scanf("%d", &num);
if((num % 9 == 0)||(num % 7 == 0))
{
printf("Number is divisible by 9 or 7");
}
else
{
printf("Number is not divisible by 9 and 7");
}
return 0;
}
