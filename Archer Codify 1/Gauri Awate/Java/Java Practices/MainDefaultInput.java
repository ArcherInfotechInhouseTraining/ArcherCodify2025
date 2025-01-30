import java.util.Scanner;
class Sample
{
	private int x;
	private double y;
	public Sample() // Default constructor
	{
		System.out.println("\n In default constructor of Sample class");
		Scanner sc=new Scanner(System.in);
		System.out.println("\nEnter the value of x:");
		 x=sc.nextInt();
		System.out.println("\nEnter the value of y:");
		y=sc.nextDouble();
		
	}
	public void showData()
	{
		System.out.println("\n x="+x+"\t y="+y);
	}
}
class MainDefaultInput
{
	public static void main(String []args)
	{
		Sample ob = new Sample();
		
		ob.showData();
	}
}

