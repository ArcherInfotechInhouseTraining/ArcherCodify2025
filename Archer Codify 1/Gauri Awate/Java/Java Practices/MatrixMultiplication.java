//// WAP to perform matrix multi.
import java.util.*;
class MatrixMultiplication
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int [][]x=new int[3][3];
		int [][]y=new int[3][3];
		int [][]z=new int[3][3];
		int i,j;
		System.out.println("Enter the first matrix:");
		for(i=0;i<x.length;i++)
		{
			for(j=0;j<x[i].length;j++)
			{
				x[i][j]=sc.nextInt();
			}
			System.out.println();
		}
		System.out.println("Enter the second matrix:");
		for(i=0;i<y.length;i++)
		{
			for(j=0;j<y[i].length;j++)
			{
				y[i][j]=sc.nextInt();
			}
			System.out.println();
		}
		System.out.println("\nMultiplication matrix is:");
		for(i=0;i<z.length;i++)
		{
			for(j=0;j<z[i].length;j++)
			{
				z[i][j]=0;
				for(int k=0;k<z[i].length;k++)
				{
					z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
					
				}
				
				
			}
		}
		System.out.println("First matrix:");
		for(i=0;i<x.length;i++)
		{
			for(j=0;j<x[i].length;j++)
			{
				System.out.print(" "+x[i][j]);
			}
			System.out.println();
		}
		System.out.println("Second matrix:");
		for(i=0;i<y.length;i++)
		{
			for(j=0;j<y[i].length;j++)
			{
				System.out.print(" "+y[i][j]);
			}
			System.out.println();
		}
		System.out.println("\nMultiplication matrix is:");
		for(i=0;i<z.length;i++)
		{
			for(j=0;j<z[i].length;j++)
			{
				System.out.print(" "+z[i][j]);
			}
			System.out.println();
		}


	}
}

