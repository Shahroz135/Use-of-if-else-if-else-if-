#include"stdio.h"
#include"conio.h"
void main()
{
int marks;
clrscr();
printf("Enter the marks of Student");
scanf("%d",&marks);
if(marks>=33)
{
printf("Student is pass");
}
else
{
printf("Student is Fail");
}
getch();
}