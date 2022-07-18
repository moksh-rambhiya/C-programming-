#include <stdio.h>
void main () {
    int a[10],temp,j,n,i;

    printf("How many no you want?\n");
    scanf("%d",&n);
    printf("Enter %d no\n",n);
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    printf("The sorted array is\n");
    for (i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
}
