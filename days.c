#include <stdio.h>
int main()
{
int days, years, weeks;
days = 1329;
// Converts days to years, weeks and days
years = days/365;
weeks = (days % 365)/7;
days = days- ((years*365) + (weeks*7));
printf("Years: %d\n", years);
printf("Weeks: %d\n", weeks);
printf("Days: %d \n", days);
return 0;
}
