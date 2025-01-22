//Using java.util.Scanner to take the input from keyboard
import java.util.*;
class UsingScanner
{
	public static void main(String args[]) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("\nEnter string value:");
		String str=sc.nextLine();
		System.out.println("\nEnter integer value:");
		int x=sc.nextInt();
		System.out.println("\nEnter double value:");
		double d=sc.nextDouble();
		System.out.println("\nEnter float value:");
		float f=sc.nextFloat();
		char ch='a';
		System.out.println("\nEnter char value:");
		
		ch=sc.next().charAt(0);
		System.out.println("\nInteger:"+x);
		System.out.println("\nString:"+str);
		System.out.println("\nDouble:"+d);
		System.out.println("\nFloat:"+f);
		System.out.println("\nChar:"+ch);
	}
}