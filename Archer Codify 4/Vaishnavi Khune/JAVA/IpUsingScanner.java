import java.util.Scanner;
class IpUsingScanner
{
	public static void main(String []args)
	{
		Scanner sc = new Scanner(System.in);
		int a=0;
		double d=0.0;
		String str=" -";
		char ch='&';
		
		System.out.println("Enter the String : ");
		str=sc.nextLine();

		System.out.println("Enter int value: ");
		a=sc.nextInt();
		System.out.println("Enter double value: ");
		d=sc.nextDouble();
		System.out.println("Enter char:  ");
		ch=sc.next().charAt(0);

		System.out.println("Int: "+a+"\tDouble: "+d+"\tString: "+str+"\t Char: "+ch);
	}
}