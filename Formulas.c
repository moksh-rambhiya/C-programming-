#include <stdio.h>
void main ()
{
float a=3 , b=2, x=11, y=10 , z=5;
float o=x*(a/b)+y*(x-a)/(y-b);
printf("The answer of x*(a/b)+y*(x-a)/(y-b) is %f\n",o);
o=z*z*(x*x-y*y)+a*a*0.8;
printf("The value of z*z*(x*x-y*y)+a*a*0.8 is %f\n",o);
o=5*x*y-(x/y)+(x*x*x-y)/(y+x)*5*x*y-(x/y)+(x*x*x-y)/(y+x)*5*x*y-(x/y)+(x*x*x-y)/(y+x);
printf("The value 5*x*y-(x/y)+ (x*x*x-y)/(y+x) of is %f\n",o);
o=(x*a*b+(y-z))/(z*z)/(x-b);
printf("The value of is %f\n",o);
}
