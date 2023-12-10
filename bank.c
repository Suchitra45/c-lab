#include <stdio.h>
#include <string.h>
struct BankAccount {
int accountNumber;
char accountHolderName[50];
float balance;
};
int main() {
printf("SUCHITRA RANA\n");
struct BankAccount accounts[10];
for (int i = 0; i < 10; ++i) {
printf("Enter details for account %d:\n", i + 1);
printf("Account Number: ");
scanf("%d", &accounts[i].accountNumber);
printf("Account Holder's Name: ");
scanf("%s", accounts[i].accountHolderName);
printf("Balance: ");
scanf("%f", &accounts[i].balance);
}
int maxIndex = 0;
for (int i = 1; i < 10; ++i) {
if (accounts[i].balance > accounts[maxIndex].balance) {
maxIndex = i;
}
}
printf("\nAccount with the highest balance:\n");
printf("Account Number: %d\n", accounts[maxIndex].accountNumber);
printf("Account Holder's Name: %s\n", accounts[maxIndex].accountHolderName);
printf("Balance: %.2f\n", accounts[maxIndex].balance);
return 0;
}
