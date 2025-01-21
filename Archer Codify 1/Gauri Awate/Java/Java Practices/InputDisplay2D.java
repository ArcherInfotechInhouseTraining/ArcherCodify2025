// input and display 2D Array of 3x4
import java.util.*;
class InputDisplay2D
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int [][]arr=new int[3][4];		
		System.out.println("\nEnter the array elements:");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				arr[i][j]=sc.nextInt();
			}
			System.out.println();
		}
		System.out.println("\nEntered 2D array is:");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<4;j++)
			{
				System.out.print(" "+arr[i][j]);
			}
			System.out.println();

		}

	}

}