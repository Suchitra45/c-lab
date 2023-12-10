#include <stdio.h>
#include <string.h>
int main()
{
printf("SUCHITRA RANA \n");
int flag1 = 0,flag2 = 0;
char user_name[] = "bcastudent";
char user_password[] = "geubca";
char user_name1[20];
char user_password1[20];
printf("Enter Username :--> ");
gets(user_name1);
printf("Enter Password :--> ");
gets(user_password1);
if((strcmp(user_name, user_name1) == 0) && (strcmp(user_password, user_password1) ==0 ))
{
printf("Success");
}
else
{
printf("Failure");
}
return 0;
}
