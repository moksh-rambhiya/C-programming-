#include<stdio.h>

void main(){
    int age[100],i,n,count=0;

    printf("Input age of 100 persons\n");

    for(i=0;i<100;i++) {
        scanf("%d",&age[i]);
        if(age[i]>=50&&age[i]<=60){
             count++;
        }
        else
            continue;
    }
    printf("There are %d persons whose age is in between 50 and 60 years",count);

}
