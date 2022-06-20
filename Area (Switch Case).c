#include <stdio.h>
void main () {
    int l,b,answer;// Declaring Variables
    short int opt;

    printf(" 1.Area of Square\n 2.Area of Triangle\n 3.Area of Rectangle\n");// Printing the options
    read_option:// Using Label for recall or re-run of program
    printf("Please select your option\n");
    scanf("%d",&opt);// User Input for option

    printf("Please Enter Length(Base) and Breadth(Height)\n");
    scanf("%d %d",&l,&b);// User Input for length and breadth

    switch (opt) {
    case 1:// Switch case option 1 for area of square
        answer=l*l;
        printf("The Area of Square is %d\n",answer);
        goto read_option;
        break;
    case 2:// Switch case option 2 for Area of Triangle
        answer=(float)1/2*(l*b);
        printf("The Area of Triangle is %d\n",answer);
        goto read_option;
        break;
    case 3:// Switch case option 3 for Area of Square
        answer=l*b;
        printf("The Area of Rectangle is %d\n",answer);
        goto read_option;
        break;
    case 4:// Switch case option 4 for ending the program
        printf("Thank You\n");
        break;
    default:// Default case for invalid input
        printf("Invalid output");
        goto read_option;// Use of Goto in-case of default
        break;
    }

}
