#include<stdio.h>
struct fire
{
	char c[10];
	float current;
	int loc;
};
int main()
{
	int n;
	printf("Enter Number of Entries to be made\n");
	scanf("%d",&n);
	struct fire l[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter City name:");
		scanf("%s",&l[i].c);
		printf("\n Enter Current Value of Sensor:");
		scanf("%f",&l[i].current);
		printf("\n Enter Location Coordinates:");
		scanf("%d",&l[i].loc);
	}
	for(int i=0;i<n;i++)
	{
		if(l[i].current<1)
		{
			printf("\nFIRE ALARM INITIATED");
			printf("\nLOCATION %d BEING SENT TO %s FIRE STATION",l[i].loc,l[i].c);
		}
}
return 0;
}
