import java.util.Scanner;
class DemoUnary
{
	public static void main(String []args)
	{
		int x=0;
		int y=0;
		int z=0;
	
		Scanner sc= new Scanner(System.in);
		System.out.println("\n Enter the values of x and y: ");
		x=sc.nextInt();//10
		y=sc.nextInt();//20

		z=-x;//-9
		x++;//11
		--y;//20
		System.out.println("\n x="+x+"\t y="+y+"\t z="+z);

		z=++x+y--;//-1
		System.out.println("\n x="+x+"\t y="+y+"\t z="+z);
	}
}
