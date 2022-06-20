#include <stdio.h>
void main () {
    int a;
    printf("Enter an age\n");
    scanf("%d",&a);

        if (a<18)
        {
            printf("It is a Teen Toddler\n");
        }
        else if (a<25)
        {
            printf("It is an Adult\n");
        }
        else if (a<=55)
        {
            printf("It is a working Adult\n");
        }
        else if (a<60)
        {
            printf("It is a Senior Citizen\n");
        }
        else if (a<=100)
        {
            printf("Hamare Zamane mein yeh sab nahi hota tha bolne wale log\n");

        }
        else
        {
            printf("Invalid age");
        }
}
