#include <stdio.h>
void main() {
    char ch='*';
    int i,j;
    int n=5;

    for (i=0;i<5;i++){

        for (j=0;j<i;j++){
            printf("%c ",ch);
        }
    }
}

