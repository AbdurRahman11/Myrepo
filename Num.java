package Github;

import java.util.Scanner;

public class Sumn {

	public static void main(String args[])
	{
		int n,a = 0,sum=0,i;
		System.out.println("\n enter the number of digits to add");
		Scanner in = new Scanner(System.in);
		n=in.nextInt();
		for (i=0;i<n;i++)
		{
			System.out.println("\n enter the number");
			Scanner it = new Scanner(System.in);
			a=it.nextInt();
			sum=a+sum;
		}
		System.out.print(sum);
	}
}
