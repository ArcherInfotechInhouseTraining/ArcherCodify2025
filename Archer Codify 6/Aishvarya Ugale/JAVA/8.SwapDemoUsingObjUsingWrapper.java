/*Another way to represent the data in its equivalent object from is to use Wrapper classes
*/
class SwapDemoUsingObjUsingWrapper
{
	public static void swap(Integer  oba, Integer obb)
	{
		int tmp;
		tmp=oba;
		oba=obb;
		obb=tmp;
	}
	public static void main(String[]args)
	{
		int x=10, y=20;

		Integer obx = x;
		Integer oby = y;

		System.out.println("\n Before Interchange x="+obx+"\t y="+oby);
		swap(obx,oby);
		System.out.println("\n After Interchange x="+obx+"\t y="+oby);
	}
}
