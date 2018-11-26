//This is the example of Array of Union:-
#include<stdio.h>
#include<conio.h>
main()
{
union val {
  int int_num;
  float fl_num;
  char str[20]; 
};

union val nums[10];
int k;

for (k = 0; k < 10; k++) {
  nums[k].int_num = k;
}

for (k = 0; k < 10; k++) {
  printf("%d  ", nums[k].int_num);
} 
getch();
}
