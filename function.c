#include <stdio.h>

/* declaration */
int square (int num); 

int main() {
  int x, result;
  
  x = 5;
  result = square(x);
  printf("%d squared is %d\n", x, result);
    
  return 0;
}

/* definition */
int square (int num) {
  int y;

  y = num * num;

  return(y);
} 


//Output is 5 squared is 25
