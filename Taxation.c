#include <stdio.h>
void main () {
    int income,tax;

    printf("Please Enter your Gross Income\n");
    scanf("%d",&income);
    printf("Your Gross Income is %d\n",income);

    if (income<250000){
        tax=income*0;
        printf("The tax amount payable is %d\n",tax);
    }
    else if (income<500000) {
        tax=income*0.05;
    printf("The tax amount payable is %d\n",tax);
    }

    else if (income<750000) {
        tax=income*0.1;
        printf("The tax amount payable is %d\n",tax);
    }
    else if (income<1000000) {
        tax=income*0.15;
       printf("The tax amount payable is %d\n",tax);
    }
    else if (income<1250000){
        tax=income*0.2;
        printf("The tax amount payable is %d\n",tax);
    }
    else if (income<15000000) {
        tax=income*0.3;
        printf("The tax amount payable is %d\n",tax);
    }
    else {
       tax=income*0.45;
       printf("The tax amount payable is %d\n",tax);
    }


}
