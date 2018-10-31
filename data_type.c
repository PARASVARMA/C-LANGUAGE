//This is how we can know the size of any data type in c:-
#include <stdio.h>

int main() {
  printf("int: %d \n", sizeof(int));
  printf("float: %d \n", sizeof(float));
  printf("double: %d \n", sizeof(double));
  printf("char: %d \n", sizeof(char));

  return 0;
}
