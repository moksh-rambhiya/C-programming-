#include <stdio.h>
void main () {
    int n;

    scanf("%d",&n);

    n=(n%2==0)?printf("%d",n++):printf("%d",--n);
}
