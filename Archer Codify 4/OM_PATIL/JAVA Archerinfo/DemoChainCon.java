//Constructor chaining.

public class DemoChainCon
{
	private String name;
	private int age;
	private String grade;
	
	// Default constructor.
	public DemoChainCon()
	{
		this("Unknown",0,"Not Assigned");
		System.out.println("\n Default constructor of DemoChainCon Class");
	}
	
	// Constructor with two parameters
	public DemoChainCon(String name,int age)
	{
		this(name,age,"Not Assigned");
		System.out.println("\n Para args2 constructor of DemoChainCon Class");
	}

	// Parameterized constructor with three para
	public DemoChainCon(String name,int age,String grade)
	{
		this.name=name;
		this.age=age;
		this.grade=grade;
	}
	
	public void display()
	{
		System.out.println("Name:"+name+",Age:"+age+",Grade:"+grade);
	}
	
	public static void main(String []args)
	{
		DemoChainCon s1=new DemoChainCon();
		DemoChainCon s2=new DemoChainCon("Amol",20);
		DemoChainCon s3=new DemoChainCon("om",22,"A");

		s1.display();
		s2.display();
		s3.display();
	}
}
		