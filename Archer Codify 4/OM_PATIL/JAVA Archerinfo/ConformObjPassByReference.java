class This
{
	private int age;
	private String name;
	public void setData(int age)
	{
		this.age=age;
	}
	public void setName(String name)
	{
		this.name=name;
	}
	public int getVal()
	{
		return age;
	}
	public String getName()
	{
		return name;
	}
	public static void sampleData(This t)
	{
		t.setData(getVal()+100);
	}
	public static void SampleName(This t2)
	{
		t2.setName(getName()+"patil");
	}
	
}
class ThisCheck
{
		

	public static void main(String []args)
	{
		int x=10;
		String name={"om"};
	
		This ob=new This();
		ob.setData(x);
		ob.setName(name);
		
		System.out.println("before- x "+ob.getVal()+"\n before-name:"+getName());
		sampleData(ob);
		System.out.println("After- x "+ob.getVal()+"\n before-name:"+getName());
	}
	

	