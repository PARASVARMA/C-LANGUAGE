#include<stdio.h>
#include<conio.h>
int main()
{
void swap (int *num1, int *num2);

int main() {
  int x = 25;
  int y = 100;

  printf("x is %d, y is %d\n", x, y); 
  swap(&x, &y);
  printf("x is %d, y is %d\n", x, y); 

  return 0;
}
 
void swap (int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

return;
}
