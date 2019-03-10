#include<stdio.h>
int main()
{
int ch;
printf("\n********** 1-HEADS **********");
printf("\n********** 2-TAILS **********");
printf("\nEnter your choice[1 for HEADS or 2 for TAILS]=");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("\n%c%c%c%c%c%c%c%c%c",32,32,32,32,42,32,32,32,42);
printf("\n%c%c%c%c%c%c%c%c%c%c",32,32,32,42,32,42,32,42,32,42);
printf("\n%c%c%c%c%c%c%c%c%c%c%c",32,32,42,73,32,32,42,32,32,32,42);
printf("\n%c%c%c%c%c%c%c%c%c%c%c",32,32,42,32,76,79,86,69,32,32,42);
printf("\n%c%c%c%c%c%c%c%c%c%c",32,32,32,42,32,32,89,79,85,42);
printf("\n%c%c%c%c%c%c%c%c%c",32,32,32,32,42,32,32,32,42);
printf("\n%c%c%c%c%c%c%c%c",32,32,32,32,32,42,32,42);
printf("\n%c%c%c%c%c%c%c",32,32,32,32,32,32,42);
break;
}
case 2:
{
printf("\n%c%c%c%c%c%c%c%c%c",32,32,32,32,42,32,32,32,42);
printf("\n%c%c%c%c%c%c%c%c%c%c",32,32,32,42,32,42,32,42,32,42);
printf("\n%c%c%c%c%c%c%c%c%c%c%c",32,32,42,32,32,32,42,32,32,32,42);
printf("\n%c%c%c%c%c%c%c%c%c%c%c",32,32,42,73,39,109,32,32,32,32,42);
printf("\n%c%c%c%c%c%c%c%c%c%c",32,32,32,42,83,79,82,82,89,42);
printf("\n%c%c%c%c%c%c%c%c%c",32,32,32,32,42,32,32,32,42);
printf("\n%c%c%c%c%c%c%c%c",32,32,32,32,32,42,32,42);
printf("\n%c%c%c%c%c%c%c",32,32,32,32,32,32,42);
break;
}
default:
{
printf("invalid choice");
}
}
}
