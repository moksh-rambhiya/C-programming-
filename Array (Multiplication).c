#include <stdio.h>
void main () {
    int a[10],b[10],c[4],i,j,k,l,m,n;

    printf("Enter value for A\n");
    scanf("%d",&m);
    printf("Enter %d values for A\n",m);

    for (i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
     for (i=0;i<m;i++){
        printf("%d",a[i]);
        printf("\n");
    }
    printf("Enter value for B\n");
    scanf("%d",&n);
    printf("Enter %d values for B\n",n);

    for (j=0;j<n;j++) {
        scanf("%d",&b[j]);
    }
      for (j=0;j<n;j++) {
        printf("%d",b[j]);
        printf("\n");
    }
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++){
            if (i%2==0 && !(j%2==0)) {
                c[k]=a[i]*b[j];
            }
        }
    }

    for (k=0;k<m;k++) {
        printf("%d\n",c[k]);
    }


}
