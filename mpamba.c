# include <stdio.h>
# include <stdlib.h>
# include "library.h"
#include "promi.h"
#include "promise.h"

 int buy_Airtime();
 int send_money();
 int cash_out();

int main(){

    int choice;
    start:
    printf("Mpamba- Main Menu\n");
    printf("1 Buy Airtime/Bundle\n");
    printf("2 Send money\n");
    printf("3 Cash Out\n");
   /* printf("4 Make Payments\n");
    printf("5 Banks & Financial Services\n");
    printf("6 E-Ticketing\n");
    printf("7 My Account\n");*/

    scanf("%d", &choice);

    switch(choice){
        case 1:
        buy_Airtime();
        break;

        case 2:
        send_money();
        break;

        case 3:
        cash_out();
        break;

        default:
        goto start;
        break;
    }
    return 0;
}
