import java.util.*;
class MyUnderstand
{
	private int x[]={1,2,3,4,5};
	public void out()
	{
		System.out.print("Elements are:");
		for(int i=0;i<x.length;i++)
		{
			System.out.print("  "+x[i]);
		}
	}
	public int search(int t)
	{
		for(int i=0;i<x.length;i++)
		{
			if(x[i]==t)
				return i;
		}
		return -1;
	}
}
class MyArrayExample1
{
	public static void main(String[] args)
	{
		MyUnderstand ob=new MyUnderstand();
		ob.out();
		
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the no. to be searched: ");
		int n=sc.nextInt();
		int pos=ob.search(n);	
		if(pos==-1)
			System.out.println("No. is not present");
		else
			System.out.println("No. is present at "+pos+" position");
	}
}