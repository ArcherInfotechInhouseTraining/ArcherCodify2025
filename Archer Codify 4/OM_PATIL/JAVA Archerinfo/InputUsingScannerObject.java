import java.util.Scanner;
class InputUsingScannerObject
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);

		String str="";
		int x=0;
		double db=0.0;
		char ch='$';

		System.out.println("Enter the String:");
		str=sc.nextLine();

		System.out.println("Enter the integer value:");
		x=sc.nextInt();

		System.out.println("Enter the double value:");
		db=sc.nextDouble();

		System.out.println("Enter the character:");
		ch=sc.next().charAt(0);

		System.out.println("String str:"+str);
		System.out.println("int x:"+x);
		System.out.println("Double db:"+db);
		System.out.println("char ch:"+ch);
	}
}






		