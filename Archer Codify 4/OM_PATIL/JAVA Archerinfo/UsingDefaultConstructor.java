class Sample
{
	private int x;
	private double y;
	
	Sample()
	{
		System.out.println("\n Enter the integer value of x:");
		java.util.Scanner sc=new java.util.Scanner(System.in);
		x=sc.nextInt();
		System.out.println("\n Enter the double value of y:");
		y=sc.nextDouble();
	}
	public void out()
	{
		System.out.print("\n x:"+x+"\t y:"+y);
	}
	
}
class UsingDefaultConstructor
{
	public static void main(String []args)
	{
		Sample t=new Sample();
		t.out();
	}
}