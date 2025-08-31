class Singleton
{
	private static Singleton instance;
	private static String msg;
	private Singleton()
	{
		System.out.println("In the private constructor of singleton class");
	}
	public static Singleton getInstances(String str)
	{
		if(instance==null)
		{
			msg=str;
		instance=new Singleton();
		}
		return instance;
		
	}
	public void showData()
	{
		System.out.println("Hello from singleton "+msg);
	}

}
class SingletonDemo
{
	public static void main(String []args)
	{
		Singleton s1=Singleton.getInstances("One");
		Singleton s2=Singleton.getInstances("Two");
		s1.showData();
		s2.showData();
	}
	
}