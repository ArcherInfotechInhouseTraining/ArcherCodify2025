/*class DemoMainSameClass
{
	private int x=1;
	private double y=2.2;
	public static void main(String []args)
	{
		System.out.println("\n main() started");
		
		System.out.println("\n x="+x);
		System.out.println("\n y="+y);

		System.out.println("\n main() end");
	}
}


--------Output-------------

2.DemoMainSameClass.java:9: error: non-static variable x cannot be referenced from a static context
                System.out.println("\n x="+x);
                                           ^
2.DemoMainSameClass.java:10: error: non-static variable y cannot be referenced from a static context
                System.out.println("\n y="+y);
                                           ^
2 errors



 Now i want to create multiple instances

	 Note that if you want to access the members of class where main() is defined then also you need to 
  	 create the object of same class and access the methods.
	 

class DemoMainSameClass
{
	private int x=1;
	private double y=2.2;
	public static void main(String []args)
	{
		System.out.println("\n main() started");
		
		DemoMainSameClass ob1 = new DemoMainSameClass();
		System.out.println("\n ob1.x="+ob1.x);
		System.out.println("\n ob1.y="+ob1.y);
		
		DemoMainSameClass ob2 = new DemoMainSameClass();
		System.out.println("\n ob2.x="+ob2.x);
		System.out.println("\n ob2.y="+ob2.y);

		System.out.println("\n main() end");
	}
}



// another ways is decl thode variables as static*/

class DemoMainSameClass
{
	private static int x=1;
	private static double y=2.2;
	public static void main(String []args)
	{
		System.out.println("\n main() started");
		
		System.out.println("\n x="+x);
		System.out.println("\n y="+y);

		System.out.println("\n main() end");
	}
}








