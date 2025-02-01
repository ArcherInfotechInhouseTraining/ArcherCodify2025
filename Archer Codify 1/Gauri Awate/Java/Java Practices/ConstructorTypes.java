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
	public Sample(int x,double y)
	{
		this.x=x;
		this.y=y;
	}
	public Sample(Sample t)
	{
		x=t.x;
		y=t.y;
	}
	public void showData()
	{
		System.out.println("\n x="+x+"\t y="+y);
	}
}
class ConstructorTypes{
	public static void main(String []args)
	{
		Sample ob = new Sample();
		ob.showData();
		Sample ob1 = new Sample(9,5.6);
		ob1.showData();
		Sample ob2 = new Sample(ob1);
		ob2.showData();

	}
}

