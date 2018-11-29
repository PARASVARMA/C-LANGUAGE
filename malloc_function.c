//this is the basic example of malloc function:-
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
main()
{
int *ptr;
/* a block of 10 ints */
ptr = malloc(10 * sizeof(*ptr));

if (ptr != NULL) {
  *(ptr + 2) = 50;  /* assign 50 to third int */
}
getch();
}
