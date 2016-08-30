#include <Stdio.h>

void main()
{
   int n, i = 2;
 
   printf("Enter a number to check if it is prime\n");
   scanf("%d",&n);
 
      for ( i = 2 ; i <= n - 1 ; i++ )
   {
      if ( n%i == 0 )
      {   
	 break;
      }
   }  
   if ( i == n )
      printf("%d\n", n); 
}
}