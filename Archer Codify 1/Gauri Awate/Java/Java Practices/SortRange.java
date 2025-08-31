	/*-sortrange
	 - insert
	 - delete
	 - reverse
	 - copy
	 - copyrange
	 - Reverse Copy
	 - merge
	 - split
	 - concatenate
	 - compare
	 - fill
	 - fillrange
*/
import java.io.*;
import java.util.*;
class SortRange
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int []arr=new int[5];
		int []x=new int[arr.length];
		int i,j;
		System.out.println("\nEnter the array elements:");
		for(i=0;i<arr.length;i++)
		{
			arr[i]=sc.nextInt();
		}
		System.out.println("\nArray before sorting elements:");
		for(i=0;i<arr.length;i++)
		{
			System.out.print(" "+arr[i]);	
		}
		Arrays.sortrange(arr,0,3);
		
                System.out.println("\nArray after sorting elements:");
		for(i=0;i<arr.length;i++)
		{
			System.out.print(" "+arr[i]);	
		}
                

		
	}
}