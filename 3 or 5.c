#include <stdio.h>
void main () {
    int a;

    scanf("%d",&a);
    a=(a%3==0)?printf("%d",a/3):printf("%d",a/5); //Why does it give 5 when input is 15 and not 3 and also why does it give 50 when input if 150 and not 5


}
