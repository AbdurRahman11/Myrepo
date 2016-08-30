#include <stdio.h>
void main()
{
int a,b,min,i,hcf;
printf("\n enter the two numbers");
scanf("%d%d",&a,&b);
min = (a<b)? a:b;
for ( i =1;i<=min; i++)
{
if((a%i==0) && (b%i==0))
{
hcf =i;
}
}
printf("\n the hcf is %d",hcf);
}