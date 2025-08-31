// Array initialization and display.
/*
class InitArray
{
	public static void main(String []args)
	{
		int ar[]={11,22,33,44,55};
		
		System.out.println("\n Array elements are: ");
		for(int i=0;i<ar.length;i++)
		{
			System.out.println("  "+ar[i]);
		}
		
		// For-each loop
		System.out.println("\n Array ele. are:");
		for(int val:ar)
		{
			System.out.println("  "+val);
		}
	}
}


// Using BufferedReader and InputStreamReader

import java.io.*;
class ArrayIOBI
{
	public static void main(String args[]) throws Exception
	{
		int x[]=new int[5];
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		//Input
		System.out.println("\n Enter array:");
		for(int i=0;i<x.length;i++)
		{
			x[i]=Integer.parseInt(br.readLine());
		}
		
		//Display
		System.out.println("\n Array elements are:");
		for(int i=0;i<x.length;i++)
		{
			System.out.println("  "+x[i]);
		}
	}
}



// Using Scanner method

import java.util.*;
class ScannerMethod
{
	public static void main(String []args)
	{
		int x[]=new int[5];
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter array elements are:");
		for(int i=0;i<x.length;i++)
		{
			x[i]=sc.nextInt();
		}

		System.out.println("\n Array elements are: ");
		for(int i=0;i<x.length;i++)
		{
			System.out.println("  "+x[i]);
		}
	}
}


//Using showInputDialog

import javax.swing.JOptionPane;
class ArrayIOSIDialog
{
	public static void main(String []args)
	{
		String data=JOptionPane.showInputDialog("\n Enter space separeted array object:");
		System.out.println("Entered string: "+data);

		String nums[]=data.split("  ");
		int []ar=new int[nums.length];

		System.out.println("\n Enter array: ");
		for(int i=0;i<nums.length;i++)
		{
			ar[i]=Integer.parseInt(nums[i]);
		}

		System.out.println("\n Array elements are:");
		for(int val:ar)
		{
			System.out.println("  "+val);
		}
	}
}



import java.util.*;
class DynaAlloctaion
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("\n Enter the element count: ");
		int cnt=sc.nextInt();		

		int x[]=new int[cnt];
		
		System.out.println("\n Enter the "+cnt+" Elements:");
		for(int i=0;i<x.length;i++)
		{
			x[i]=sc.nextInt();
		}
		
		System.out.println("\n 1.Elements are: ");
		for(int i=0;i<x.length;i++)
		{
			System.out.println("  "+x[i]);
		}
		
		System.out.println("\n 2.Elements are: ");
		for(int val:x)
		{
			System.out.println("  "+val);
		}

	}
}


//task 1.

//Sorting. 1.Selection sort
import java.util.Scanner;
class SortArray
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter the count of elements to insert:");
		int cnt=sc.nextInt();

		int x[]=new int[cnt];
		System.out.println("\n Elements of "+cnt+ "are");
		for(int i=0;i<x.length;i++)
		{
			x[i]=sc.nextInt();
		}
	
		// Selection sort.
		for(int i=0;i<cnt-1;i++)
		{
			int tmp;
			for(int j=i+1;j<cnt;j++)
			{
				if(x[i]>x[j])
				{
					tmp=x[i];
					x[i]=x[j];
					x[j]=tmp;
				}
			}
		}

		System.out.println("\n Array with sorting in ascending order: ");
		for(int val:x)
		{
			System.out.println("  "+val);
		}
	}
}


*/

// Bubble sort.using BufferedReader and InputStreamReader
import java.io.*;
class BubbleSort
{
	public static void main(String []args) throws Exception
	{
		System.out.println("\n Enter the cnt:");
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

		int cnt=Integer.parseInt(br.readLine());
		
		int x[]=new int[cnt];

		System.out.println("\n Elements of "+cnt+ "are");
		for(int i=0;i<x.length;i++)
		{
			x[i]=Integer.parseInt(br.readLine());
		}
	
		// Bubble sort.
		for(int i=0;i<x.length;i++)
		{
			int tmp;
			for(int j=0;j<(x.length)-1;j++)
			{
				if(x[j]>x[j+1])
				{
					tmp=x[j];
					x[j]=x[j+1];
					x[j+1]=tmp;
				}
			}
		}

		System.out.println("\n Array with sorting in ascending order: ");
		for(int val:x)
		{
			System.out.println("  "+val);
		}
	}
}


		
*/
// task 3.
//Insertion sort.		

//Using showInputDialog

import javax.swing.JOptionPane;
class ArrayIOSIDialog
{
	public static void main(String []args)
	{
		String data=JOptionPane.showInputDialog("\n Enter space separeted array object:");
		System.out.println("Entered string: "+data);

		String nums[]=data.split("  ");
		int []ar=new int[nums.length];

		System.out.println("\n Enter array: ");
		for(int i=0;i<nums.length;i++)
		{
			ar[i]=Integer.parseInt(nums[i]);
		}

		System.out.println("\n Array elements are:");
		for(int val:ar)
		{
			System.out.println("  "+val);
		}
	}
}
	