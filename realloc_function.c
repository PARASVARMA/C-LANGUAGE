//This example of realloc function():-
#include<stdio.h>
#include<conio.h>
main()
{
int *ptr;
ptr = malloc(10 * sizeof(*ptr));  
if (ptr != NULL) {
  *(ptr + 2) = 50;  /* assign 50 to third int */
}
ptr = realloc(ptr, 100 * sizeof(*ptr)); 
*(ptr + 30) = 75; 
getch();
}
