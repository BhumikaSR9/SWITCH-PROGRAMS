#include<stdio.h>

void main()
{

int choice;
int n1,n2;

printf("ENTER 1 FOR ADDITION, 2 FOR SUBTRACTION, 3 FOR MULTIPLY, 4 FOR DIVIDE");
scanf("%d",&choice);

printf("ENTER 2 NUMBERS TO PERFORM CALCULATIONS:");
scanf("%d %d",&n1,&n2);

switch(choice)
{
case 1:
sum=a+b;
printf("SUM=%d",sum);

break;

case 2:
sub=a-b;
printf("DIFFERENCE=%d",sub);

break;

case 3:
mul=a*b;
printf("PRODUCT=%d",mul);

break;

case 4:
qu=a/b;
printf("QUOTIENT=%d",qu);

break;

default:

printf("INVALID CHOICE");

}
getch();

}
