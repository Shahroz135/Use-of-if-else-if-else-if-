//Program to find even\odd  number
#include"stdio.h"
#include"conio.h"
void main()
{
int num;
clrscr();
printf("Enter any integer numbrr:");
scanf("%d",&num);
if(num%2==0)
{
printf("%d is an even number",num);
}
else
{
printf("%d is an odd number",num);
}
getch();
}