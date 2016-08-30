#include <stdio.h>
void main()
{
char c;
printf("\n enter the alphabet or number ");
scanf("%c", &c);
if ((c>='a' ) && (c<='z'))
{
printf("\n it is a alphabet");
}
else
{
printf("\n it is a number ");
}
}