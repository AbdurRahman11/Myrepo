#include <stdio.h>
void main()
{
int sum=0, n;
printf("\n enter the number");
scanf("%d",&n);
for ( int i=1;i<=n;i++)
{
sum = sum+i;
}
printf(" %d" ,sum);
} 