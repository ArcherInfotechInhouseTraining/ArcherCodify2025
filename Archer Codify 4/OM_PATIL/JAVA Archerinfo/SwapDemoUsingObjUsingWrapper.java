// Wrapper classes.

class SwapDemoUsingObjUsingWrapper
{
	public static void swap(Integer oba,Integer obb)
	{
		int tmp;
		tmp=oba;
		oba=obb;
		obb=tmp;
	}
	public static void main(String []args)
	{
		int x=10,y=20;
		
		Integer obx=x;
		Integer oby=y;
		
		System.out.println("\n before x="+obx+"\t y="+y);
		System.out.println("\n After x="+obx+"\t y="+y);
	}
}
		
