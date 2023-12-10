#include<stdio.h>
int main()
{
int num, count, sum = 0;
printf("Enter a positive number\n");
scanf("%d", &num);
printf("\nNatural Numbers from 1 to %d are:\n", num);
for(count = 1; count <= num; count++)
{
printf("%d\n", count);
sum   = sum + count;
}
printf("\nSum of natural numbers from 1 to %d is: %d\n", num, sum);
return 0;
}
