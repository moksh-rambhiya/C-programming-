#include <stdio.h>
void main () {
    int num[10],i,even=0,odd=0;
    printf("Enter 10 nos\n");

    for (i=0;i<10;i++) {
        scanf("%d",&num[i]);
        if (num[i]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }

    for (i=0;i<10;i++) {
        printf("%d \n",num[i]);
        }
    printf("Total no of even nos is %d\n",even);
    printf("Total no of odd nos is %d\n",odd);
}
