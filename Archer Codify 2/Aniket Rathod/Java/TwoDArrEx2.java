import java.util.Scanner;

class TwoDArrEx2
{
	public static void main(String []args)
	{
		int [][]arr = new int[3][4];
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Array Elements: ");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<4;j++)
			{
				arr[i][j] = sc.nextInt();
			}
		}
		System.out.println("\n Array element are: ");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(" "+arr[i][j]);
			}
		}	System.out.println("\n");
	}
}