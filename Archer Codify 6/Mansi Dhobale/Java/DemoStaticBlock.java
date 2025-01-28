class Example
{
	static int x=10;		// we not decl. as private coz want to access directly
	static double y=9.8;	// for checking purpose
	static boolean z;

	static
	{
		//z=true;
		//x=5;
		y=x*x/3.0;
		System.out.println("\n In Static Block");
	}
	// ... some another members
}
class Main
{
	public static void main(String[] args) 
	{
		System.out.println("value of x: "+Example.x);
		//System.out.println("value of x: "+Example);
		System.out.println("value of y: "+Example.y);
		System.out.println("value of z: "+Example.z);
	}
}

