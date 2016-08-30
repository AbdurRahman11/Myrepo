#include<stdio.h>
void main()
{
int c,a =0,b=1,n,fib;
printf("\n enter the number of digits");
scanf("%d",&n);
printf("%d",a);
printf("\n%d",b);
for ( c=0; c<n ;c++)
{
fib= a+b;
a=b;
b=fib;
printf("\n%d",fib);
}

}