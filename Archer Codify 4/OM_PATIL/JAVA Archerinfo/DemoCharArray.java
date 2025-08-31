// character array in java.

import java.util.*;
class DemoCharArray
{
	public static void main(String []args)
	{
		char ch[];
		char ch1[]={'H','E','L','L','A'};

		Scanner sc=new Scanner(System.in);

		System.out.println("\n Enter any string:");
		String str=sc.nextLine();

		System.out.println("\n Entered string is: "+str);

		ch=str.toCharArray();
		System.out.println("Converted String: ");

		for(char val:ch)
		{
			System.out.print(" "+val);
		}
	}
}
