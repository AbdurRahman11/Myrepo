#include <Stdio.h>

void main()
{
   int n, i = 2;
 
   printf("Enter a number to check if it is prime\n");
   scanf("%d",&n);
 for (int d=2;d<=n; d++)
 {
      for ( i = 2 ; i <= d - 1 ; i++ )
   {

      if ( d%i == 0 )
	  
      { 
       
	 break;
      }
   }  
   if ( i == d )
      printf("%d\n", d);
 
 
}
}