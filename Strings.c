#include <stdio.h>
void main () {
    char gen;
    char first_name[25];

    printf("Enter your first name\n");
    scanf("%s",first_name);
    printf("Enter your Gender M or F\n");
    scanf("%s",&gen);
    printf("Good Morning, ");
    (gen=='M')?printf("Mr "):printf("Mrs ");
    printf("%s",first_name);
}
