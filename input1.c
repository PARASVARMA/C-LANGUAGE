//Here second way to take the input in c language:-
#include <stdio.h>

int main() {
  char a[100];

  gets(a); 

  printf("You entered: %s", a);

  return 0;
}
