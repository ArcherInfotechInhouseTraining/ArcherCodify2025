
	// Lets first confirm that, Object is bydefault passed by reference.
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
}
class ObjByRefConfirm
{
	public static void sample(Int t)
	{
		t.setData(t.getData()+100);
	}
	public static void main(String[]args)
	{
		int x=10;
		Int obx = new Int();
		obx.setData(x);

		System.out.println("Before - x="+obx.getData());
		sample(obx);
		System.out.println("After - x="+obx.getData());		
	}
}
