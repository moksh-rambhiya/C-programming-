#include <stdio.h>
void main () {
    int a[10][10],i,j,m,n;
    printf("Define the size of row and column in matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter values for %dx%d\n",m,n);
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");

    }
}
