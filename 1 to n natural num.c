#include <stdio.h>
int main(){
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("Natural numbers from 1 to %d are: \n", num);
for (int i = 1; i <= num; i++)
{
printf("%d \n", i);
}
return 0;
}
