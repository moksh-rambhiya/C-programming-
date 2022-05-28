#include <stdio.h>
#include <math.h>
void main () {
    int a , b;
    printf("Please enter a number to get perfect square\n");
    scanf("%d",&a);
    b=pow(a,2);
    printf("The perfect square is %d\n",b);
    float c , d;
    printf("Please enter a number for square rooting\n");
    scanf("%f",&d);
    c=sqrt(d);
    printf("The square root is %f\n",c);
    float e,f;
    printf("Enter a number for sin function\n");
    scanf("%f",&e);
    f=sin(e);
    int g,h;
    printf("The value sin %f is %f\n",e,f);
    printf("Please Enter a value for absolute value\n");
    scanf("%d",&g);
    h=abs(g);
    printf("The absolute value is %d\n",h);
   float i,j;
    printf("Please enter a value for floor value\n");
    scanf("%f",&i);
    j=floor(i);
    printf("The floor value is %f\n",j);
    float k,l;
    printf("Please enter a value for ceiling value\n");
    scanf("%f",&k);
    l=ceil(k);
    printf("The ceiling value is %f\n",l);
    float m,n;
    printf("Please enter a value to get logarithmic value\n");
    scanf("%f",&m);
    n=log10(m);
    printf("The logarithmic value of %f is %f\n",m,n);
    float o,p;
    printf("Please enter a value for exponent\n");
    scanf("%f",&o);
    p=exp(o);
    printf("The exponential value of %f is %f",o,p);
    }


