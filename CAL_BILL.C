/*Program to calculate bill according to get following criteria:
if uni5s are less than equal to 200 than cost ofper unit is rs.8
or if units are greater than 200 then cost if per unit is rs.11
but sutcharge 7% will be added if units are greater than 200
and finally bill will be generated*/
#include"stdio.h"
#include"conio.h"
void main()
{
int cur_read, pre_read, units;
float bill;
clrscr();
printf("Enter the previous reading of meter:");
scanf("%d",&pre_read);
printf("Enter the current reading of meter:");
scanf("%d",&cur_read);
units=cur_read-pre_read;
if(cur_read<pre_read)
{
printf("Previous reading can not be greater can not current reading so , the bill can not be generated");
}
else if(units<=200)
{
bill=units*8.0;
printf("Elestricity bill for %d units =%.2f",units,bill);
}
else if(units>200)
{
bill=units*11.0;
bill+=bill*7.0/100.0;
printf("Elestricity bill for %d units =%.2f",units,bill);
}
getch();
}

