//In this example pointer used with array:-
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5] = {22, 33, 44, 55, 66};
int *ptr = NULL;
int i;

ptr = a;
for (i = 0; i < 5; i++) {
  printf("%d ", *(ptr + i));
}
getch();
}
