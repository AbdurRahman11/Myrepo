#include<stdio.h>
 
int main()
{
   int n, i = 3, count,c,sum=0;
 
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);
 
   if ( n >= 1 )
   {
      printf("sum of %d prime numbers are :\n",n);
      
   }
 
   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
	  
	
         
		
         count++;
      sum=sum+i;
	  }
      i++;
   }printf("%d",(sum+2));
 
   return 0;
}