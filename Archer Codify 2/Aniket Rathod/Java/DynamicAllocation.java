import java.util.Scanner;

class DynamicAllocation
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("\n Enter the element count:");
	
		int cnt=sc.nextInt();
		int[]a = new int[cnt];

		System.out.println("Enter the"+cnt+"Element: ");

		for(int i=0;i<cnt;i++)
		{
			a[i]=sc.nextInt();
		}
	

	System.out.println("Elements: ");
	for(int t : a)
	{
		System.out.println("  "+t);
	}
}

	
}