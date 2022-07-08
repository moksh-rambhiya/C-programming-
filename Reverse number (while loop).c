#include <stdio.h>
void main() {

  int n,reverse=0,remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;// Storing the remainder of the number.
    reverse = reverse * 10 + remainder;//adding the remainder to reverse variable.
    n /= 10; // Using short-hand operator to end the loop.
  }

  printf("Reversed number = %d", reverse);

  }
