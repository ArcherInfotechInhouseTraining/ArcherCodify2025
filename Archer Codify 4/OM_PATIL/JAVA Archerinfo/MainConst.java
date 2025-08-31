import java.util.*;
class Sample
{
	private int x;
	public Sample()
	{
		System.out.println("In default constructor");
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter int value:");
		x=sc.nextint();
		
	}
	public Sample(int a1)
	{
		System.out.println("In para constructor");
		x=a1;
	}
	public Sample(Sample t)
	{
		System.out.println("\n In Copy costructor");
		x=t.x;
	}
	public void out()
	{
		System.out.println("\n x="+x);
	}
}
class MainConst
{
	public static void main(String []args)
	{
		Sample ob=new Sample(12);
		ob.out();
	
		/*
		System.out.println("\n In main class");
		System.out.println("Enter the int value:);
		int x=sc.nextInt();
		*/
	}
}
	