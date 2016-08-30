#include<stdio.h>
int main()
{
int i,even =0,odd =0;
{for (i=1;i<=15;i++)
if (i%2==0)
{
even=even+i;
}
printf("\n %d",even);}
{for (i=15;i<=45;i++)
if (i%2==0)
{
odd=odd+i;
}
printf("\n %d",odd);
}
}