#include <stdio.h>
#include <stdlib.h>

int send_money(){

int num, amount, pin;

number:
printf("Enter recipients number\n");
scanf("%d",&num);

if(num !=0){

    printf("enter amount\n");
    scanf("%d",&amount);
    printf("\n");
    pin:
    printf("enter pin\n");
    scanf("%d",&pin);

    if(pin !=0 ){

        printf("You have successfully sent MK%d to %d !\n", amount, num);

    }
    else{
        goto pin;
    }

}
else
{
    goto number;
}

return 0;
}