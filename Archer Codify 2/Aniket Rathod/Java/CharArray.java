import java.util.*;

class CharArray
{
	public static void main(String []args)
	{
		char []ch;
		//char []ch1={'H','E','L','L','O'};

		Scanner sc= new Scanner(System.in);

		System.out.println("\n Enter any string: ");
		String str=sc.nextLine();

		System.out.println("Entered String: "+str);

		ch=str.toCharArray();
		System.out.println("Converted String: ");

		for(char t : ch)
		{
			System.out.print(" "+t);
		}
	}
}