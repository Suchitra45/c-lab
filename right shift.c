#include <stdio.h>
int main ()
{
printf("SUCHITRA RANA\n");
int num;
printf (" Enter a positive number: ");
scanf (" %d", &num);
num = (num >> 2);
printf (" \n After shifting the binary bits to the right side. ");
printf (" \n The new value of the variable num = %d", num);
return 0;
}
