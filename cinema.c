#include <stdio.h>
int main() {
    int ch;
    int num, tickets = 0;
    float cost = 0;
    int looping = 1;  
    while (looping == 1) {
        printf(" Welcome To The UPES Ticket Booking System\n");
        printf("1. Premium - 200 Rs\n");
        printf("2. Standard - 150 Rs\n");
        printf("3. Economy - 100 Rs\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("Enter how many Premium tickets: ");
            scanf("%d", &num);
            cost = cost + (num * 200);
            tickets = tickets + num;
        } else if (ch == 2) {
            printf("Enter how many Standard tickets: ");
            scanf("%d", &num);
            cost = cost + (num * 150);
            tickets = tickets + num;
        } else if (ch == 3) {
            printf("Enter how many Economy tickets: ");
            scanf("%d", &num);
            cost = cost + (num * 100);
            tickets = tickets + num;
        } else if (ch == 4) {
            printf("Exiting...\n");
            looping = 0;  
        } else {
            printf("Wrong input! Try again.\n");
        }
    }
    if (tickets >= 5) {
        printf("You got 5 percent discount!\n");
        cost = cost * 0.95;
    }
    printf("BILL\n");
    printf("Tickets: %d\n", tickets);
    printf("Total: Rs %.2f\n", cost);
    return 0;
}

    