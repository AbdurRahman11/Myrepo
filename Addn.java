package Github;

import java.util.Scanner;

public class Num {
	public static void main(String args[]) {
		int n, sum = 0, i;
		System.out.println("\n enter the number of digits to add");
		Scanner in = new Scanner(System.in);
		n = in.nextInt();
		for (i = 0; i <= n; i++) 
		{
			sum=sum+i;
		}
		System.out.print(sum);
	}

}
