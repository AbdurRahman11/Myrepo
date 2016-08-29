package Github;

import java.util.Scanner;

public class Pos {
	public static void main(String args[])
	{
	int n;
	System.out.println("\n enter the number");
	Scanner in = new Scanner(System.in);
	n = in.nextInt();
	if(n>=0)
	{
		if(n==0)
		{
			System.out.println("\n The number is Zero");
		}else
		{
			System.out.println("\nThe number is Positive");
		}
	}
		else
		{
			System.out.println("The number is negative");
		}
	}

	}
	

