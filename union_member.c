//this is how we can access member of union:-
#include<stdio.h>
#include<conio.h>
main()
{
union val {
  int int_num;
  float fl_num;
  char str[20]; 
};
  
union val test;

test.int_num = 123;
test.fl_num = 98.76;
strcpy(test.str, "hello");

printf("%d\n", test.int_num);
printf("%f\n", test.fl_num);
printf("%s\n", test.str);
getch();
}
