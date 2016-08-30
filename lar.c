#include <stdio.h>
void main()
{
int a,b,c;
printf("\n enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("\n %d is the largest number" ,a);
} else
{
printf("\n %d is the largest number", c);
}
}else if (b>c)
{
printf("\n %d is the largest", b);
}
else
{
printf("\n %d is the largest", c);
}
}

