import java.util.*;
class ConcantinateArr
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter the count:");
		int cnt=sc.nextInt();

		int arr[]=new int[cnt];
		System.out.println("Enter the Array elements:");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sc.nextInt();
		}
		
		System.out.println("Array elements:");
		for(int i=0;i<arr.length;i++)
		{
			System.out.print("\t"+arr[i]);
		}
		
		int newarr[]=new int[2*(arr.length)];
		for(int i=0;i<arr.length;i++)
		{
			newarr[i]=arr[i];
			newarr[i+arr.length]=arr[i];
		}
		
		System.out.println("\nArray elements with concantinate:");
		for(int i=0;i<newarr.length;i++)
		{
			System.out.print("\t"+newarr[i]);
		}
	}
}


		
