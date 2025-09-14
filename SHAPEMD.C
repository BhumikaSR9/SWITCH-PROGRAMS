#include <stdio.h>

void main()
{
int choice;

clrscr();

printf("ENTER 1 FOR VOLUME OF CUBE \n 2 FOR VOLUME OF CUBOID \n 3 FOR VOLUME OF SPHERE");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("ENTER SIDE OF CUBE:");
scanf("%d",&side);
vcube=side*side*side;
printf("VOLUME OF CUBE=%d",vcube);
