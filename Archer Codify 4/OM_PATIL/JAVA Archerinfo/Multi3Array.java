// Multi-Dimentional Array.

// init. of 2D Array:

/*
class Init2dArray
{
	public static void main(String []args)
	{
		int [][]ar = { {12,34,45,56}, {11,22,33,44}, {10,20,30,40} };

		System.out.println("Array elements are");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<4;j++)
			{
				System.out.print("  "+ar[i][j]);
			}
			System.out.println();
		}
		System.out.println("\n Array elements are");
		for(int i=0;i<ar.length;i++)
		{
			for(int j=0;j<ar[i].length;j++)
			{
				System.out.print("  "+ar[i][j]);
			}
			System.out.println();
		}
	}
}


// input and display 2D array using Scanner.

import java.util.*;
class InputUScanner
{
	public static void main(String []args)
	{
		int x[][]=new int[3][4];
		Scanner sc=new Scanner(System.in);
		System.out.println("Entered the array elements:");

		for(int i=0;i<3;i++)
		{
			for(int j=0;j<4;j++)
			{
				x[i][j]=sc.nextInt();
			}
		}
		
		System.out.println("\n Array elements are: ");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<4;j++)
			{
				System.out.print(" "+x[i][j]);
			}
			System.out.println();
		}
	}	
}
	

*/


// matrix multiplication.

import java.util.*;
class Multi3Array
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		int x[][]=new int[3][3];
		int y[][]=new int[3][3];
		int z[][]=new int[3][3];
		
		//Input x
		System.out.println("\n Enter the array elements in x:");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				x[i][j]=sc.nextInt();
			}
		}

		//Input y
		System.out.println("\n Enter the array elements in y:");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				y[i][j]=sc.nextInt();
			}
		}

		//multiplication operation.
		System.out.println("\n Enter the array elements in x:");
		for(int i=0;i<x.length;i++)
		{
			for(int j=0;j<x[i].length;j++)
			{
				for(int k=0;k<x[i].length;k++)
				{
					z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
				}
			}
		}

		//Display 
		System.out.println("\n Array Multiplication of X*Y is: ");
		for(int i=0;i<x.length;i++)
		{
			for(int j=0;j<x[i].length;j++)
			{
				System.out.print(" "+x[i][j]);
			}
			System.out.print("\t");
			for(int j=0;j<y[i].length;j++)
			{
				System.out.print(" "+y[i][j]);
			}
			System.out.print("\t");
			for(int j=0;j<z[i].length;j++)
			{
				System.out.print(" "+z[i][j]);
			}
			System.out.println();
		}
	}
}

		
			