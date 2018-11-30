//The example of free function:-
#include<stdio.h>
#include<conio.h>
main()
{
int* ptr = malloc(10 * sizeof(*ptr));
if (ptr != NULL)
  *(ptr + 2) = 50;  /* assign 50 to third int */
printf("%d\n", *(ptr + 2));

free(ptr);
getch();
}
