#include<stdio.h>
int main()
{
	int doon[20];
	int hari[20];
	int del[20];
	int luck[20];
		printf("Enter water levels of DehraDun");
	for(int i=0;i<20;i++)
	{
	 scanf("%d",&doon[i]);
	}
			printf("\nEnter water levels Haridwar");
	for(int i=0;i<20;i++)
	{
	 scanf("%d",&hari[i]);
	}
			printf("\nEnter water levels of Delhi");
	for(int i=0;i<20;i++)
	{
	 scanf("%d",&del[i]);
	}
			printf("\nEnter water levels of Lucknow");
	for(int i=0;i<20;i++)
	{
	 scanf("%d",&luck[i]);
	}
	for(int i=0;i<20;i++)
	{
		if(doon[i]>250)
		{
			printf("\nWater level in Dehradun at Location %d is %d",i+1,doon[i]);
		printf("\nGenerating alarm and Issuing warning in nearby Police stations");
    	}
    	if(del[i]>250)
		{
			printf("\nWater level in Delhi at Location %d is %d",i+1,del[i]);
		printf("\nGenerating alarm and Issuing warning in nearby Police stations");
    	}
    	if(hari[i]>250)
		{
			printf("\nWater level in Haridwar at Location %d is %d",i+1,hari[i]);
		printf("\nGenerating alarm and Issuing warning in nearby Police stations");
    	}
    	if(luck[i]>250)
		{
			printf("\nWater level in Lucknow at Location %d is %d",i+1,luck[i]);
		printf("\nGenerating alarm and Issuing warning in nearby Police stations");
    	}
	}
	return 0;
}
