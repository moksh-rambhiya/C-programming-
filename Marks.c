#include <stdio.h>
void main () {
    int a;
    printf("Enter your Marks\n");
    scanf("%d",&a);

        if (a>90)
        {
            printf("A+ Grade\n");
        }
        else if (a>85)
        {
            printf("Ist Class\n");
        }
        else if (a>75)
        {
            printf("Distinction\n");
        }
        else if (a>59)
        {
            printf("Average\n");
        }
        else if (a>44)
        {
            printf("You are not our child\n");

        }
        else
        {
            printf("Please Leave this house");
        }
}
