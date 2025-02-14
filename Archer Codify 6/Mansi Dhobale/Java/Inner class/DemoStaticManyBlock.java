class Example
{
	static int x;
	static int t;		// we not decl. as private coz want to access directly
	static double y;	// for checking purpose
	static boolean z;
	static
	{
		z=true;
		t=2;  // try with t=0
		System.out.println("\n In Static Block-1");
	}	
	static
	{
		try
		{
			x=23/t;
		}
		catch (Exception e)
		{
			System.out.println("\n Unable to init x, so init to default value");
		}
		System.out.println("\n In Static Block-2");
	}	
	static
	{
		y=x*5.7/x;
		System.out.println("\n In Static Block-3");
	}
	// ... some another members
}
class DemoStaticTryCatch
{
	public static void main(String[] args) 
	{
		System.out.println("value of x: "+Example.x);
		System.out.println("value of y: "+Example.y);
		System.out.println("value of z: "+Example.z);
	}
}
