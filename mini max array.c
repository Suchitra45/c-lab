#include<stdio.h>
int main()
{
    printf("SUCHITRA RANA\n");
int a[20],i,n,max,min;
printf("enter the size of array: ");
scanf("%d",&n);
printf("enter n elements into array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
 }
 min=a[0];
 for(i=0;i<n;i++)
{
if(a[i]<min){
   min=a[i];
}
}
printf("the maximum element is %d: \n",max);
printf("the minimum element is %d: ",min);
return 0;
}
