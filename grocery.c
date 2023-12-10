#include <stdio.h>
struct GROCERY
{
    char product_name[100];
    int quan;
    float price;
    float weight;
};
int main()
{   float bill;
    bill=0.0;
    struct GROCERY item[5];
    for(int i=0;i<5;i++)
    {
        printf("ENTER PRODUCT NAME:");
        scanf("%s",&item[i].product_name);
        printf("ENTER PRODUCT QUANTITY:");
        scanf("%d",&item[i].quan);
        printf("ENTER PRODUCT PRICE:");
        scanf("%f",&item[i].price);
        printf("ENTER PRODUCT WEIGHT:");
        scanf("%f",&item[i].weight);
    }
    for(int i=0;i<5;i++)
    {
        bill=bill+item[i].quan*item[i].price;
    }
    printf("PRODUCT NAME\t PRICE\t QUANTITY\t WEIGHT\n");
    for(int i=0;i<5;i++)
    {
    printf("%s\t\t%d\t\t%f\t\t%f\n",item[i].product_name,item[i].quan,item[i].price,item[i].weight);
    }
    printf("\n");
    printf("TOTAL BILL-%f",bill);
    return 0;
}
