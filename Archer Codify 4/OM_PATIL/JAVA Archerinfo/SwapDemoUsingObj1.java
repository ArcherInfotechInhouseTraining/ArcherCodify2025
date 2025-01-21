class Int
{
	private int data;
	public void setData(int data)
	{
		this.data=data;
	}
	public int getData()
	{
		return data;
	}
	public static void swap(Int ob1,Int ob2)
	{
		int tmp;
		tmp=ob1.getData();
		ob1.setData(ob2.getData());
		ob2.setData(tmp);
	}
}
class SwapDemoUsingObj1
{
	public static void main(String []args)
	{
		int x=10,y=20;
		
		Int ob1=new Int();
		ob1.setData(x);

		Int ob2=new Int();
		ob2.setData(y);
		
		System.out.println("BEFORE:x="+ob1.getData()+"\t y="+ob2.getData());
		ob1.swap(ob1,ob2);
		System.out.println("AFTER:x="+ob1.getData()+"\t y="+ob2.getData());
		
	}
}