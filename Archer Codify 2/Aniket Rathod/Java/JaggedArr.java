import java.util.Scanner;

class JaggedArr
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("\n Enter the player coutn: ");

		int pcnt = sc.nextInt();
		int[][]data = new int[pcnt][];

		System.out.println("\n Enter the details of "+pcnt+" players");
		for(int i=0;i<data.length;i++)
		{
			System.out.println("\n Enter the match count of player "+(i+1)+": ");
			int mcnt = sc.nextInt();
			data[i] = new int[mcnt];
			System.out.println("\n Enter the runs scored by player: ");
			for(int j=0;j<data[i].length;j++)
			{
				System.out.println("\n  Match "+(j+1)+" ");
			}
		}
	}
}