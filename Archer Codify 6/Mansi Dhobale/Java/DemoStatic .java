class Example
{
	static int x;		// we not decl. as private,it is default, and accessible using 
	static double y;	// .operator directly. And we want to access directly for checking purpose.
	static boolean z;
	// ... some another members
}
class DemoStatic 
{
	public static void main(String[] args) 
	{
		System.out.println("value of x: "+Example.x);
		System.out.println("value of y: "+Example.y);
		System.out.println("value of z: "+Example.z);
	}
}
