#include <stdio.h>
# include <stdlib.h>

int airtime();
int bundle();

int buy_Airtime(){

int op;
start:
printf("Please Select:\n");
printf("1 Airtime\n");
printf("2 Bundle\n");

scanf("%d", &op);

switch(op){
    case 1:
    airtime();
    break;

    case 2:
    bundle();
    break;

    default:
    goto start;
    break;
}
return 0;
}

int airtime(){

    int amount;
    int num, numm, verification;

    printf("please select:\n");
    printf("1 for my number\n");
    printf("2 for another number\n");

    scanf("%d", &num);

    switch(num){

    case 1:
    printf("Enter amount\n");
    scanf("%d", &amount);

    printf("Enter pin to comfirm top-up of MK%d into your card\n", amount);
    scanf("%d",&verification);

    if(verification!=0){
    printf("Your mpamba recharge of MK%d was successful\n",amount);
    }
    else{

        printf(" oops something went wrong\n");
    }
    break;

    case 2:
    printf("Enter number\n");
    scanf("%d ",&numm);

    printf("Enter amount\n");
    scanf("%d", &amount);

    printf("Enter pin to comfirm top-up of MK%dnto your card\n", amount);
    scanf("%d",&verification);

    if(verification!=0){
    printf("Your mpamba recharge was successful\n");
    }
    else{

        printf(" oops something went wrong\n");
    }
    break;

    default:
    break;
    }
    return 0;
    }

    


int bundle(){
    int  am;
    int veri,n, ch, bu, nummm;

    printf("please select:\n");
    printf("1 for my number\n");
    printf("2 for another number\n");

    scanf("%d", &n);

    switch(n){

        case 1:

            printf("Enter amount:");
            printf("1.MK2000- 1.2GB\n");
            printf("2.MK4000- 8GB\n");
            printf("3.MK10,000- 2OGB\n");
            scanf("%d",&bu);
            
            switch(bu){
                case 1:
                printf("Enter pin to comfirm top-up into your card\n");
                scanf("%d",&veri);

                if(veri!=0){
                    printf("Your mpamba recharge was successful\n");
                }
                else{

                    printf(" oops something went wrong\n");
                }

                printf("You purchase 1.2GB bundle successfully\n");
                 break;

                case 2:
                printf("Enter pin to comfirm top-up into your card\n");
                scanf("%d",&veri);

                if(veri!=0){
                    printf("Your mpamba recharge was successful\n");
                }
                 else{

                    printf(" oops something went wrong\n");
                }

                printf("You purchase 8GB bundle successfully\n");
                break;

               case 3:
               printf("Enter pin to comfirm top-up into your card\n");
                scanf("%d",&veri);

                if(veri!=0){
                    printf("Your mpamba recharge was successful\n");
                }
                else{

                    printf(" oops something went wrong\n");
                }
                printf("You purchase 20GB bundle successfully\n");
                break; 

                default:
                break;
        }
        break;

        case 2:
        printf("Enter number\n");
        scanf("%d",&nummm);

        printf("Enter amount:");
        printf("1.MK2000- 1.2GB\n");
        printf("2.MK4000- 8GB\n");
        printf("3.MK10,000- 2OGB\n");
        scanf("%d",&bu);
            
            switch(bu){
                case 1:
                 printf("You purchase 1.2GB bundle successfullyfor %ld\n",nummm);
                 break;

                case 2:
                printf("You purchase 8GB bundle successfully for %ld \n",nummm);
                break;

               case 3:
                printf("You purchase 20GB bundle successfully for %ld\n",nummm);
                break; 

                default:
                break;
        }
        break;

        default:
        break;
    }
    return  0;
    }

