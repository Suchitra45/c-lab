#include <stdio.h>
int main ()
{
printf("SUCHITRA RANA\n");
int i, j, x, y;
printf (" Enter the value of i " );
scanf (" %d", &i);
printf (" Enter the value of j " );
scanf (" %d", &j);
x = i++;
printf (" After using the post-incrementing, the value of i is  %d \n", i);
printf (" The value of x is %d \n", x);
y = j--;
printf (" After using the post-decrementing, the value of j is  %d \n", j);
printf (" The value of y is %d \n", y);
return 0;
}
