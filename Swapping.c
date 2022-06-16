#include <stdio.h>
void main () {
    int a,b;

    printf("Please Enter two values a and b\n");
    scanf("%d %d",&a,&b);
    printf("The Entered value of a is %d\n",a);
    printf("The Entered value of b is %d\n",b);

    a=a-b;
    b=a+b;
    a=b-a;

    printf("The value of a after swapping is %d\n",a);
    printf("The value of b after swapping is %d\n",b);
}
