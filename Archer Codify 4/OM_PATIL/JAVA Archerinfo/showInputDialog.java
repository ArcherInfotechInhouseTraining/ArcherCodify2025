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

*/

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