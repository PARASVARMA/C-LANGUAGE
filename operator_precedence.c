//This shows that what precedence of any operator should have :--
#include <stdio.h>

int main() {
  int a = 6;
  int b = 4;
  int c = 2;
  int result;
  result = a - b + c; // 4
  result = a + b / c; // 8
  result = (a + b) / c; // 5

  return 0;
}
