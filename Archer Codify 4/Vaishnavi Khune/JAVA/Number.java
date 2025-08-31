import java.util.Scanner;
class Number
{
	private int x;
	private double y;
	public void in()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the val of x: ");
		x=sc.nextInt();
		System.out.println("Enter the val of y: ");
		y=sc.nextDouble();
	}
	public void out()
	{
		System.out.println("val of x: "+x);
		System.out.println("val of y: "+y);
	}
	public static void main(String []args)
	{
		/*Number ob=new Number();
		ob.in();
		ob.out();*/
		in();
		out();
	}
}
