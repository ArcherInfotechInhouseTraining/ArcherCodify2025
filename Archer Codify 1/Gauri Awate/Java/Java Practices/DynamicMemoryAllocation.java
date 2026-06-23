// Dynamic Memory Allocation ( Using java array as a pointer)

import java.util.*;
class DynamicMemoryAllocation
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("\nEnter the element count:");
		int cnt=sc.nextInt();
		int arr[]=new int[cnt];
		System.out.println("\nEnter the array "+cnt+" elements:");
		for(int i=0;i<cnt;i++)
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