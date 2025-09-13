#include <stdio.h>

void main()
{

int num;

clrscr();

printf("ENTER NUMBER OF MONTHS");
scanf("%d",&num);

switch(num)
{
case 1:
printf("MONTH=JANUARY");

break;

case 2:
printf("MONTH=FEBRUARY");

break;

case 3:
printf("MONTH=MARCH");

break;

case 4:
printf("MONTH=APRIL");

break;

case 5:
printf("MONTH=MAY");

break;

case 6:
printf("MONTH=JUNE");

break;

case 7:
printf("MONTH=JULY");

break;

case 8:
printf("MONTH=AUGUST");

break;

case 9:
printf("MONTH=SEPTEMBER");

break;

case 10:
printf("MONTH=OCTOBER");

break;

case 11:
printf("MONTH=NOVEMBER");

break;

case 12:
printf("MONTH=DECEMEBER");

break;

default:

printf("INVALID NUMBER ENTERED, ENTER NUMBER FROM 1 TO 12!!");

}
getch();

}