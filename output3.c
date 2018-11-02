//This is how we can take input and output by scanf and printf for multiple values of output and input :-
#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two numbers:");
  scanf("%d %d", &a, &b);

  printf("\nSum: %d", a+b);

  return 0;
}
