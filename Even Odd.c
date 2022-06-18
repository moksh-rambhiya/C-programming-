#include <stdio.h>
void main () {
    int a;

    printf("Please Enter a no\n");
    scanf("%d",&a);
    printf("The entered no:%d\n",a);

    if (a%2==0)
    {
        printf("The number %d is even\n",a);
    }
    else
    {
        printf("The number %d is odd",a);
    }

}
