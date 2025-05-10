//Singleton class.

class Singleton
{
	private static Singleton instance;
		
	private Singleton()
	{
		System.out.println("\n In singleton private constructor");
	}
	
	public static Singleton getInstance()
	{
		if(instance==null)
		{
			instance=new Singleton();
		}
		return instance;
	}
	public void display()
	{
		System.out.println("\n Hello! Singleton 1");
	}
}
class DemoSingleton
{
	public static void main(String []args)
	{
		Singleton ob1=Singleton.getInstance();
		Singleton ob2=Singleton.getInstance();

		ob1.display();
		ob2.display();
	}
}
	

	
	