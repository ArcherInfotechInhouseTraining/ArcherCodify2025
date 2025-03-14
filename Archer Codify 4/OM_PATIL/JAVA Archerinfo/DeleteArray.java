// Insertion in array:
/*
import java.util.*;
class InsertArray
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

		System.out.println("\n Enter the number to be Insered:");
		int no=sc.nextInt();
		
		System.out.println("\n Enter the Position at which the element inserted:");
		int pos=sc.nextInt();
		
		int newArray[]=new int[ar.length+1];
		for(int i=0;i<newArray.length;i++)
		{
			if(i<pos)
			{
				newArray[i]=ar[i];
			}
			else if(i==pos)
			{
				newArray[i]=no; //no. to insert.
			}
			else
			{
				newArray[i]=ar[i-1]; //Shifting elements to right
			}
		}
		
		//Array after insertion is:
		System.out.print(Arrays.toString(newArray));
	}
}

*/

//Deletion of element in array.

	
import java.util.*;
class DeleteArray
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

		System.out.println("\n Enter the number to be Insered:");
		int no=sc.nextInt();
		
		System.out.println("\n Enter the Position at which the element inserted:");
		int pos=sc.nextInt();
		
		// Create a new array with an additional space
        	int newAr[] = new int[ar.length + 1];

		for(int i=0,j=0;i<newAr.length;i++)
		{
			if(i==pos)
			{
				newAr[i]=no;
			}
			else
			{
				newAr[i]=ar[j];     //to copy old elements in array.
				j++;
			}	
				
		}
		
		System.out.print("Array after insertion: ");
		for(int i=0;i<newAr.length;i++)
		{
			System.out.print("\t"+newAr[i]);
		}
	}
}

			