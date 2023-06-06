//POS System

#include<stdio.h>

void main(void)
{
    int code, qty;
    float price, amt, totalAmt, cash, change;
    char addAnother;
    

    do {
        system("cls");
        printf("======================\n");
        printf("SEM RESTAURANT & VIBES\n");
        printf("======================\n\n");
        printf("[1] Double Stack Cheeseburger\t\tGDP 8.50\n");
        printf("[2] Chicken Strip Burger\t\tGDP 8.50\n");
        printf("[3] BBQ Chicken Pizza\t\tGDP 9.50\n");
        
        printf("\nEnter Code\t: ");
        scanf("%d", &code);
        printf("\nEnter Qauntity\t: ");
        scanf("%d", &qty);

        switch(code) {
            case 1: price = 8.50;
                break;
            case 2: price = 8.50;
                break;
            case 3: price = 9.50;
                break;
        }
        amt =price * qty;
        
        printf("\nAmount\t\t: %.2f", amt);

        totalAmt = totalAmt + amt;
        printf("\nTotal Amount\t: %.2f");
        printf("\nAdd another order(Y/N)?", totalAmt);
        addAnother = getche();
    } while(addAnother == 'y' || addAnother == 'Y');
    do {
        printf("\nCash Tendered\t: ");
    scanf("%f", &cash);
    }while(cash < totalAmt);

    change = cash - totalAmt;
    printf("\nChange\t\t: %.2f", change);
    printf("n\nThank you. Come Again! :)");

    
}

