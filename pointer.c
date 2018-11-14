//This is the example of Pointer in C language:-
#include<stdio.h>
#include<conio.h>
void main()
{
int x = 5;
int y;
int *p = NULL;
p = &x;

y = *p + 2; /* y is assigned 7 */
y += *p;     /* y is assigned 12 */
*p = y;       /* x is assigned 12 */
(*p)++;      /* x is incremented to 13 */

printf("p is pointing to the value %d\n", *p); 
getch();
}
