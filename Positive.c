#include <stdio.h>
#include <math.h>
void main () {
    int a,b;
    scanf("%d",&a);

    a=(a>0)?printf("%The positive value is %d\n",a):(a<0)?printf("The positive value is %d",a*-1):printf("The value is zero");
    b=pow(a,2);
    printf("%d",b);// How to square ??

}

