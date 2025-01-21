//We have to create a 2D array to store runs of N player scored in M matches. where
	//M may be different for each player.

import java.util.*;
class PlayerScore
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("\nEnter the player count:");
		int pcnt=sc.nextInt();
		int [][]player=new int[pcnt][];
		System.out.println("\nEnter the details of "+pcnt+" playes");
		for(int i=0;i<player.length;i++)
		{
			System.out.println("\nPlayer: "+(i+1));
			System.out.println("\nEnter the match count:");
			int mcnt=sc.nextInt();
			player[i]=new int[mcnt];
			System.out.println("\n Enter the runs scored by player: ");
			for(int j=0;j<player[i].length;j++)
			{
				System.out.println("\n Match "+(j+1)+": ");
				player[i][j]=sc.nextInt();
			}
		}
		System.out.println("\n Score Board");

		int i=1;
		for(int []p : player)
		{
			System.out.print("\n Player "+(i++)+": ");
			for(int r : p)
			{
				System.out.print("  "+r);
			}
			System.out.println();
		}

	}
}