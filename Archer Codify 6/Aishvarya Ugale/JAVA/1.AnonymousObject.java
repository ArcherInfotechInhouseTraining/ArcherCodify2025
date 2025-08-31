
	/* Creating Anonymous Object:

	Anonymous Object is an instance of class which can not be refered by any referance variable 
	when it is created. we are able to call the methods from same instance only once at the time
	of decl.
	It's often used for situations where you only need an object temporarily, without the need to store 
	or reuse it. You cannot refer to or modify the object later since it is not stored in a variable. */

class DemoObj
{
	public void show()
	{
		System.out.println("\n In the DemoObj-show()");
	}
}

class MainDemoObj
{
	public static void main(String []args)
	{
		// Creating Anonymous Object
		new DemoObj().show();
		new DemoObj().show();
	}
}