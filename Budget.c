#include <stdio.h>
void main () {
    int a;
    printf("Enter your Budget\n");
    scanf("%d",&a);

        if (a>85000)
        {
            printf("We would recommend buying Iphone\n");
        }
        else if (a>64000)
        {
            printf("We would recommend buying Google Pixel\n");
        }
        else if (a>45000)
        {
            printf("We would recommend buying Samsung\n");
        }
        else if (a>30000)
        {
            printf("We would recommend buying One Plus\n");
        }
        else if (a>15000)
        {
            printf("We would recommend buying Realme\n");

        }
        else
        {
            printf("We would recommend buying Oppo/Vivo/Nokia 3310");
        }
}
