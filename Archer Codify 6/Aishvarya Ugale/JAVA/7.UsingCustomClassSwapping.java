// Use same class for swapping (Using custom class)


class Int
{
	private int data;
	public void setData(int data)//in data x and value is stored
	{
		this.data=data;
	}
	public int getData()
	{
		return data;
	}
	public String toString()
	{
		return ""+data;
	}
}
class SwapDemoUsingObj
{
	public static void swap(Int oba, Int obb)
	{
		int tmp;
		tmp=oba.getData();              //tmp=10
		oba.setData(obb.getData());     //10=20
		obb.setData(tmp);               //20=10
	}                                       //10=20
	public static void main(String[]args)
	{
		int x=10, y=20;

		Int obx = new Int();
		obx.setData(x);//calling setData pass the 10 value using obx object of Int class

		Int oby = new Int();//creating two obj of Int class obx and oby
		oby.setData(y); //calling setData pass the 20 value using oby object of Int class

		System.out.println("\n Before Interchange x="+obx+"\t y="+oby);
		swap(obx,oby);//in object creating memory of new carbon copy passing the obj for swap fun
		System.out.println("\n After Interchange x="+obx+"\t y="+oby);
	}
}