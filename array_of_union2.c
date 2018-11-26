//This is the other example of Array of Union:-
#include<stdio.h>
#include<conio.h>
main()
{
union type {
  int i_val;
  float f_val;
  char ch_val;
};
union type arr[3];
arr[0].i_val = 42;
arr[1].f_val = 3.14;
arr[2].ch_val = 'x'; 
getch();
}
