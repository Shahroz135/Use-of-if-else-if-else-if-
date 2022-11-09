//program to find no. is positive or negativeor zero
#include"stdio.h"
#include"conio.h"
void main()
{
int a ;
clrscr();
printf("Enter any no.: ");
scanf("%d",&a);
if(a>0)
{
printf("number is positive");
}
else if (a<0)
{
printf("number is negative");
}
else
{
printf("number is zero");
}
getch();
}
