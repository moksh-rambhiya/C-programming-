#include <stdio.h>
void main () {
    int i,n;

    printf("Enter positive numbers\n");
    scanf("%d",&n);

    for (i=2;i<n/2;++i) {
        if(n%i==0){
            break;
    }

    }
    if (i==n/2) {
        printf("The number is prime\n",i);
    }
    else {
        printf("The number is non-prime\n");
    }
}
