#include <stdio.h>
void main () {
    int income,tax,d80,c80,e80,dd80;
    float tax_rate;

    printf(" 1)0-2.5L=0%\n 2)2.5L-5L=5%\n 3)5L-7.5L=10%\n 4)7.5L-10L=15%\n 5)10L-12.5L=20%\n 6)12.5L-15L=30%\n 7)More than 15L=45%\n");

    printf("Please Enter your Gross Income\n");
    scanf("%d",&income);
    printf("Your Gross Income is %d\n",income);

    if (income>250000){
        income=income-52500;
        printf("Applied standard deduction of Rs. 52500/-\n");

    }

    printf("PLease Enter amount invested in PF,ELSS,PPF\n");
    scanf("%d",d80);

    if (d80>150000){
        income=income-d80;
    }

    printf("Please Enter Insurance amount\n");
    scanf("%d",&c80);

    if(c80>75000){
        income=income-c80;
    }

    printf("Please Enter any interest on loan amount\n");
    scanf("%d",&e80);

    if(e80>50000){
        income=income-e80;
    }

    printf("Please enter a amount that is donated\n");
    scanf("%d",&dd80);

    if(dd80>60000){
        income=income-dd80;
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
