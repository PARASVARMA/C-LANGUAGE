#include<stdio.h>
#include<conio.h>
void main()
{
int num = 5;
  
while (num > 0) {
  num--;
  if (num == 3)
    continue;
      
  printf("%d\n", num);
}
getch();
}
