#include <stdio.h>

int main() {
    int choice, amount, balance = 0;
    printf("Welcome to the Bank Management System\n");
    while (1) {
        printf("\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. View Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice of number: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Account created!\n");
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposit successful!\n");
                break;
            case 3:
                printf("Enter amount you want to withdraw : ");
                scanf("%d", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                }
                break;
            case 4:
                printf("Your balance is: %d\n", balance);
                break;
            case 5:
                printf(" Hope you are satisfied thank you for using the Bank Management System!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
