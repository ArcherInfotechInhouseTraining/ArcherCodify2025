import java.util.Scanner;
interface SampleIn
{
	void in();
}
interface SampleOut extends SampleIn
{
	void out();
}
class Demo
{	private int a;
	public Demo()
	{
		a=100;
	}
	public void show()
	{	
		System.out.println("\n a="+a);
	}
}
class Test extends Demo implements SampleOut
{
	private int x;
	private double y;
	public Test()
	{
		x=23;
		y=45.21;
	}
	public void in() // visibility must be public
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("\n Enter the values of x and y: ");
		x=sc.nextInt();
		y=sc.nextDouble();
	}
	public void out() // visibility must be public
	{
		show();
		System.out.println("\n x="+x+"\t y="+y);
	}
}
class MainDemoInterfaceExample
{
	public static void main(String []args)
	{
		SampleOut ob=new SampleOut();
		//ob.in();
		ob.out();
	}
}
