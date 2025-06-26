	
class Outer 
{
	private int x=100;
	private static int y=100;
	void show()
	{
		System.out.println("Inside Outer Class");
	}
    	class Inner 
	{
        	void display() 
		{
			show();
            		System.out.println("Inside Non-static Inner Class");
            		System.out.println("x= "+x);
            		System.out.println("y= "+y);
        	}
   	}
}
class DemoInner
{
	public static void main(String []args)
	{
		Outer out = new Outer();
		out.show();

		Outer.Inner in = out.new Inner();
		in.display();
	}
}
