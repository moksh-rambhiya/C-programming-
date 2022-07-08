#include <stdio.h>

void main () {
    char ch='*';
    int i,j,k,n;

    printf("Enter no of rows\n");
    scanf("%d",&n);

    for (i=1;i<=n;i++){

        for (j=n;j>i;j--){
            printf(" ");
        }

        for (k=1;k<=i;k++) {
            printf("%c ",ch);
        }
        printf("\n");
    }
}
