//This example of if else if statement:
#include<stdio.h>
#include<conio.h>
void main()
{
int score = 89;
  
if (score >= 90)
  printf("%s", "Top 10%\n");
else if (score >= 80)
  printf("%s", "Top 20%\n");
else if (score > 75)
  printf("%s", "You passed.\n");
else
  printf("%s", "You did not pass.\n"); 
getch();
}
