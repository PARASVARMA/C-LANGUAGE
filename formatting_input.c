//Formatting input in CLanguage:-
#include<stdio.h>
#include<conio.h>
int main()
{
int x, y;
char text[20];

scanf("%2d %d %*f %5s", &x, &y, text);
/* input: 1234  5.7  elephant */
printf("%d  %d  %s", x, y, text);
/* output: 12  34  eleph */
getch();
}
