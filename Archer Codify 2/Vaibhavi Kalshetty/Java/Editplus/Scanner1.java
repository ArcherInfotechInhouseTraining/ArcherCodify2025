import java.util.Scanner;
class Scanner1 
{
	public static void main(String[] args) 
	{
		Scanner sc= new Scanner(System.in);
		System.out.println("\n string:");
		String str=sc.nextLine();
		System.out.println("\n Integer:");
		int a=sc.nextInt();
		System.out.println("\n Double:");
		double d1=sc.nextDouble();
		System.out.println("\n Char:");
		char c1=sc.next().charAt(0);

		System.out.println("\n Char:"+c1+ "\t String:"+str+"\t Integer:"+a+"\t double:"+d1);
	}
}
