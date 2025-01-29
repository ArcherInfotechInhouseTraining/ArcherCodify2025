// init. of 2D Array:
import java.util.*;
class InitDisplay2D
{	
	public static void main(String args[])
	{
		int [][]arr={{12,32,52,41},{11,22,33,44},{45,65,85,74}};
		System.out.println("\nEntered 2D array is:");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(" "+arr[i][j]);
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