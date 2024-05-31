#include <stdio.h>
#include <stdio.h>

int cash_out(){

int agent, amnt, option, p;

first:
printf("enter agent code\n");
scanf("%d",& agent);

printf("enter amount\n");
scanf("%d",& amnt);
printf("\n");
printf("you want to cash out MK%d from %d\n", amnt, agent);
printf("\n");
printf("1. yes\n");
printf("2.no\n");
scanf("%d",& option);

switch(option){

case 1: 

printf("enter pin\n");
scanf("%d", &p);

printf("You have successfully cashed out MK%d\n", amnt);
break;

case 2:
goto first;
break;

default:
goto first;
break;

}
return 0;
}
