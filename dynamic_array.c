//This is how to intialize dynamic array:-
#include<stdio.h>
#include<conio.h>
main()
{
typedef struct {
  int *elements;
  int size;
  int cap;
} dyn_array;

dyn_array arr;

/* initialize array */
arr.size = 0;
arr.elements = calloc(1, sizeof(arr.elements) );
arr.cap = 1;  /* room for 1 element */ 
getch();
}
