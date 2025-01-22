class Sample
{
	private int x;
	private double y;
	public Sample() // Default constructor
	{
		x=10;
		y=23.45;
		System.out.println("\n In default constructor of Sample class");
	}
	public void showData()
	{
		System.out.println("\n x="+x+"\t y="+y);
	}
}
class MainDefaultex
{
	public static void main(String []args)
	{
		Sample ob = new Sample();
		ob.showData();
	}
}

