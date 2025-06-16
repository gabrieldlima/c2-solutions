/*
Write a program that asks the user to enter a dollars-and-cents amount, then
displays the amount with 5% tax added:

Enter an amount: 100.00
With tax added: $105.00
*/

#include <stdio.h>

int main(void)
{
    float tax = 5.0f;
    float money, money_with_tax;

    printf("Enter an amount: ");
    scanf("%f", &money);

    money_with_tax = money + (money * (tax / 100.0f));

    printf("With tax added: $%.2f\n", money_with_tax);
    
    return 0;
}
