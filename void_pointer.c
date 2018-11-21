//The example of void pointer :-
#include<stdio.h>
#include<conio.h>
main()
{
int x = 33;
float y = 12.4;
char c = 'a';
void *ptr;
  
ptr = &x;
printf("void ptr points to %d\n", *((int *)ptr));
ptr = &y;
printf("void ptr points to %f\n", *((float *)ptr));
ptr = &c;
printf("void ptr points to %c", *((char *)ptr));
getch();
}
