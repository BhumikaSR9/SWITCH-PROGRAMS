#include <stdio.h>

void main()
{

int choice;
int area;
int r,l,b,bs,h,area;

clrscr();

printf("ENTER 1 FOR AREA OF CIRCLE");
printf("ENTER 2 FOR AREA OF RECTANGLE");
printf("ENTER 3 FOR AREA OF TRIANGLE");

scanf("%d",&choice);

switch(choice)
{

case 1:
printf("ENTER RADIUS:");
scanf("%d",&r);
area=3.14*r*r;

break;

case 2:
printf("ENTER LENGTH AND BREADTH OF RECTANGLE");
scanf("%d %d",&l,&b);
area=l*b;

break;

case 3:
printf("ENTER BASE AND HEIGHT OF TRIANGLE");
scanf("%d %d",&bs,&h);
area=1/2*bs*h;

break;

default:

printf("INVALID CHOICE !!");

}
printf("AREA= %d",&area);

getch();

}
