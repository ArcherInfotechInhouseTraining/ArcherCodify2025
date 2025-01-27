import java.util.*;
class InputDisplayArrayUsingScanner
{
	public static void main(String args[])
	{
		int arr[]=new int[6];
		Scanner sc=new Scanner(System.in);
		System.out.println("\nEnter the array elements:");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sc.nextInt();
		}
		System.out.println("\nArray elements are:");
		for(int val:arr)
		{
			System.out.print(" "+val);
		}

	}

}