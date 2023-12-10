#include <stdio.h>
int m[10][10],n[10][10],k[10][10],r,c;
void matrixmulSUCHITRA()
{
   printf("Enter rows and columns of  MATRIX\n");
   scanf("%d %d",&r,&c);
    printf("Enter elements of 1st MATRIX\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
        printf("Enter elements of 2nd MATRIX\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            k[i][j]=0;
            for(int x=0;x<c;x++)
            {
                k[i][j]+=m[i][x]*n[x][j];
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",k[i][j]);
        }
        printf("\n");
    }
}
int main()
{
   matrixmulSUCHITRA();
   return 0;
}
