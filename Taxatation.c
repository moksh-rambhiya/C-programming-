#include <stdio.h>
void main () {
    int income,tax;
    float tax_rate;

    printf("Please Enter your Gross Income\n");
    scanf("%d",&income);
    printf("Your Gross Income is %d\n",income);

    if (income>250000){
        income=income-52500;
    printf("Applied standard deduction of Rs. 52500/-\n");

    }

    if (income<250000){
        tax_rate=0;
    }
    else if (income<500000) {
        tax_rate=0.05;
    }
    else if (income<750000) {
        tax_rate=0.1;
    }
    else if (income<1000000) {
        tax_rate=0.15;
    }
    else if (income<1250000){
        tax_rate=0.2;
    }
    else if (income<15000000) {
        tax_rate=0.3;
    }
    else {
       tax_rate=0.45;
    }

    printf("Your taxable income is Rs. %d/-\n",income);
    tax=tax_rate*income;
    printf("The tax payable amount is %d\n",tax);


}
