#include<stdio.h>
struct info
{
char name[30];
int age;
char gen[6];
int lr,ur;
int e;
int p;
};
void bp(int a,int b)
{
	if(a<=80&&a>70&&b<=120&&b>110)
	printf("\nNORMAL RANGE OF BLOOD PRESSURE");

    else if(a<=80&&a>70&&b<130&&b>120)
    {
	printf("\nELEVATED BLOOD PRESSURE");
	printf("\nYOU SHOULD CUT BACK ON SODIUM AND EXERCISE REGULARLY AND IF THE BP REMAINS SAME CONSULT DOCTOR");
    }
    else if(a>90&&a<80&&b<140&&b>130)
    {
    	printf("\nHYPERTENSION STAGE I");
    	printf("\nAVOID SMOKING AND DRINKING AND FOCUS AND DASH DIET");
	}
	else if(a<120&&a>=90&&b>180&&b>=140)
	{
		printf("\nHYPERTENSION STAGE II");
		printf("\nINCREASED RISK OF CARDIOVACULAR PROBLEMS THEREFORE MEDICATIONS ARE IMPORTANT WITH LIFESTYLE CHANGES");
	}
	else
	{
		printf("\nCONTACT DOCTOR IMMEDIATELY");
	}
}

void ECG(int e)
{
	if (e>119&&e<201)
	printf("\nECG IS IN NORMAL RANGE");
	else
	printf("\nECG ABNORMAL CONTACT DOCTOR IMMEDIATELY");
}
void pul(int p)
{
	if (p>64&&p<76)
	printf("\nPULSE RATE IS NORMAL");
	else
	printf("\nPULSE RATE ABNORMAL CONTACT DOCTOR IMMEDIATELY");
}
int main()
{   int n;
    printf("\n Enter number of entries to be made:");
    scanf("%d",&n);
	struct info l[n];
	for(int i=0;i<n;i++)
	{
	printf("\nENTER NAME-");
	scanf("%s",&l[i].name);
	printf("\nENTER AGE-");
	scanf("%d",&l[i].age);
	printf("\nENTER GENDER-");
	scanf("%s",&l[i].gen);
	printf("\n LOWER AND UPPER RANGE OF BLOOD PRESSURE-");
	scanf("%d %d",&l[i].lr,&l[i].ur);
	printf("\nENTER ECG RHYTHM-");
	scanf("%d",&l[i].e);
	printf("\n ENTER PULSE RATE-");
	scanf("%d",&l[i].p);
}
	for(int i=0;i<n;i++)
	{
    	printf("\n");
	    printf("%s CONDITION REPORT",l[i].name);
		bp(l[i].lr,l[i].ur);
	    ECG(l[i].e);
	    pul(l[i].p);
		}
			printf("\n");
    printf("NAME\t\tAGE\t\tGENDER\t\tBLOOD PRESSURE\t\tECG\t\tPULSE RATE");
    	for(int i=0;i<n;i++)
	{
	printf("\n");
	printf("%s\t\t%d\t\t%s\t\t%d-%d\t\t\t%d\t\t\t%d",l[i].name,l[i].age,l[i].gen,l[i].lr,l[i].ur,l[i].e,l[i].p);

    }
    return 0;
}
