#include <stdio.h>

void main()
{

int num;

printf("ENTER NUMBER OF DAY OF WEEK:");
scanf("%d",&num);

switch(num)
{
case 1:
printf("DAY=MONDAY");
break;

case 2:
printf("DAY=TUESDAY");
break;

case 3:
printf("DAY=WEDNESDAY");
break;

case 4:
printf("DAY=THURSDAY");
break;

case 5:
printf("DAY=FRIDAY");
break;

case 6:
printf("DAY=SATURDAY");
break;

case 7:
printf("DAY=SUNDAY");
break;

default:
printf("INVALID CHOICE , CHOOSE BETWEEN 1 TO 7");

}

getch();

}
