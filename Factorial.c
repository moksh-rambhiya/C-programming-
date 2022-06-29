#include <stdio.h>
void main () {
    int a,fact=1,i;

    printf("Enter a number\n");
    scanf("%d",&a);

    for (i=a;i>1;i--) {
       fact*=i;
    }
    printf("%d\n",fact);

}
