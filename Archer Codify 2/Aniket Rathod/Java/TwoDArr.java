class TwoDArr
{
	public static void main(String []args)
	{
		int [][]arr = { {12,32,14,32}, {32,23,11,32}, {45,23,32,43} };
		
		System.out.println("Array elements are: ");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<4;j++)
			{
				System.out.println(" "+arr[i][j]);
			}
	
		}
		System.out.println("\n Array elements are: ");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(" "+arr[i][j]);
			}
			System.out.println();
		}
	}
}