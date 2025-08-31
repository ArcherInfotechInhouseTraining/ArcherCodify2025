//Write a program to input String and convert it into character array
import java.util.*;
class CharacterArray
{
	public static void main(String args[])
	{	
		Scanner sc=new Scanner(System.in);
		char []ch;
		System.out.println("\nEnter the string:");
		String str=sc.nextLine();
		System.out.println("Entered string is: "+str);
		ch=str.toCharArray();
		System.out.println("\nConverted string is:");
		for(char t:ch)
		{
			System.out.print(" "+t);
		}




}	}