#include<stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{ 
char c[5];
printf("\n enter the charecter string");
scanf ("%s",&c);
int i=0;
int j= strlen(c)-1;
for(;i<j;)
{
int temp = c[i];
c[i]=c[j];
c[j]=temp;
i++;
j--;
}
printf("%s",c);
}
