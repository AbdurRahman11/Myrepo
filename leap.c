#include <stdio.h>
void main()
{
int y;
printf("\n enter the year : ");
scanf("%d",&y);
if((y%400 == 0)||(y%4==0))
{
printf ("\n it is a leap year");
}
else
{
printf("\n it is not a leap year");
}
}