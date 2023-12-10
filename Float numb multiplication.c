#include <stdio.h>
int main()
{
    printf("SUCHITRA RANA\n");
   float num1, num2, product;
   printf("Enter first Number: ");
   scanf("%f", &num1);
   printf("Enter second Number: ");
   scanf("%f", &num2);
   product = num1 * num2;
   // Displaying result up to 3 decimal places.
   printf("Product of entered numbers is:%.3f", product);
   return 0;
}
