import java.util.*;
class Array1
{
	private int x[];
	public void set(int cnt)
	{
		x=new int[cnt];
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the array ele:");
		for (int i=0;i<cnt ;i++ )
		{
			x[i]=sc.nextInt();
		}
	}
	public void show()
	{
		for(int val:x)
		{
			System.out.println(" " +val);
		}
	}
}
class ArrayObjDemo 
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Hello World!");
		Array1 ob= new Array1();
		ob.set(3);
		ob.show();
	}
}
