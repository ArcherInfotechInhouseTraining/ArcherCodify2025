//copy of element in one array to another.


import java.util.*;
class MergeArrayElement
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		
		System.out.println("\n Enter the array 1 count:");
		int cnt=sc.nextInt();
		
		//Original array.
		int a[]=new int[cnt];


		System.out.println("\n Enter Array 1 elements : ");
		for(int i=0;i<a.length;i++)
		{
			a[i]=sc.nextInt();
		}
		
		System.out.println("\n Enter the array 2 count:");
		int cnt2=sc.nextInt();

		//another array
		int b[]=new int[cnt2];
		

		System.out.println("\n Enter Array 2 elements : ");
		for(int i=0;i<b.length;i++)
		{
			b[i]=sc.nextInt();
		}
  

		System.out.println("\n Array 1 elements are:");
		for(int i=0;i<a.length;i++)
		{
			System.out.print(" \t "+a[i]);
		} 

		System.out.println("\n Array 2 elements are:");
		for(int i=0;i<b.length;i++)
		{
			System.out.print(" \t "+b[i]);
		} 

		//merging of array 
				
		//third array
		int c[]=new int[a.length+b.length];
	

		for(int i=0;i<a.length;i++)
		{
			c[i]=a[i];
		}

		for(int i=0;i<b.length;i++)
		{
			c[a.length+i]=b[i];
		}
		
		System.out.println("\n Merge of two array is:"); 
		for(int i=0;i<c.length;i++)
		{
			System.out.print("\t"+c[i]);
		}

	}
}

