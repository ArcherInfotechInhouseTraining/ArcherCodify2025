//copy of element in one array to another.


import java.util.*;
class CopyArrayElement
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		
		System.out.println("\n Enter the array count:");
		int cnt=sc.nextInt();
		

		//Original array.
		int ar[]=new int[cnt];

		//another array
		int newAr[]=new int[ar.length];  
	
		System.out.println("\n Enter Array elements : ");
		for(int i=0;i<ar.length;i++)
		{
			ar[i]=sc.nextInt();
		}
		
		System.out.println("\n Array elements are:");
		for(int i=0;i<ar.length;i++)
		{
			System.out.print(" \t "+ar[i]);
		} 

		
		//input		
		for(int i=0;i<newAr.length;i++)
		{
			newAr[i]=ar[i];
		}
				
		System.out.print("\nCopied Array: ");
		for(int i=0;i<(newAr.length-2);i++)
		{
			System.out.print("\t"+newAr[i]);
		}

		int mergeAr[]=new int[ar.length+newAr.length];
		System.out.println("\n Merge of two array is:");
		for(int i=0;i<mergeAr.length;i++)
		{
			System.out.print("\t"+mergeAr[i]);
		}
	}
}

