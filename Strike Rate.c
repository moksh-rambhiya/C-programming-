#include <stdio.h>
#include <math.h>
void main () {
    float a,b,x,y,z,n;
        printf("Please enter suitable strike rate for Rohit Sharma in 10 overs\n");
    scanf("%f",&a);
    b=(a*60)/100;
        printf("The runs made in 10 overs is %f\n",b);
        printf("Now lets consider we played a few no balls,few wides and legbias\n");
        printf("Please enter a three values for no balls,wides and leg bias\n");
    scanf("%f %f %f",&x,&y,&z);
    n=b-x-y-z;
        printf("The total runs made by Rohit Sharma were %f\n",n);
        getch();
}
