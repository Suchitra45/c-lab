#include <stdio.h>
int main()
{
printf("SUCHITRA RANA\n");
int a, b;
printf("Enter the value of a: ");
scanf("%d", &a);
printf("Enter the value of b: ");
scanf("%d", &b);
// Display the values before swapping
printf("Before swapping: a = %d, b = %d\n", a, b);
// Exchange the values using a temporary variable
int temp = a;
a = b;
b = temp;
// Display the values after swapping
printf("After swapping: a = %d, b = %d\n", a, b);
return 0;
}
