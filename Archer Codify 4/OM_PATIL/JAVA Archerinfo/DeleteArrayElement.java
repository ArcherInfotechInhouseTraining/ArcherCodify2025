//Deletion of element in array.


import java.util.*;
class DeleteArrayElement
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		
		System.out.println("\n Enter the array count:");
		int cnt=sc.nextInt();
		
		//Original array.
		int ar[]=new int[cnt];  
	
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

		System.out.println("\n Enter the number to be deleted:");
		int no=sc.nextInt();		
		
		for(int i=0;i<ar.length;i++)
		{
			if(ar[i]==no)
			{
				for(int j=i;j<ar.length-1;j++)
				{
					ar[j]=ar[j+1];
				}
				break;
			}				
		}
		
		System.out.print("Array after Deletion: ");
		for(int i=0;i<ar.length-1;i++)
		{
			System.out.print("\t"+ar[i]);
		}
	}
}

