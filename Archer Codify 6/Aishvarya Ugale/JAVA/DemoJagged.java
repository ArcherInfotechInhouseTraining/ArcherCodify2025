
//We have to create a 2D array to store runs of N player scored in M matches. where
//M may be different for each player.

import java.util.Scanner;

class DemoJagged
{

public static void main(String args[])
{

Scanner sc=new Scanner(System.in);

System.out.println("Enter The Player Count:");
int pcnt= sc.nextInt();

int arr[][]=new int[pcnt][];

System.out.println("Enter the matches of"+pcnt+"player");
for(int i=0;i<arr.length;i++)
{
   System.out.println("Enter The matches of player:"+(i+1));
int mcnt=sc.nextInt();
 arr[i]=new int[mcnt];
    
   for(int j=0;j<arr[i].length;j++)
   {
     arr[i][j]=sc.nextInt();
    System.out.println();
   }
}

System.out.println("Details of Player:");
for(int a[]:arr)
{
for(int t :a)
System.out.println(" "+t);
}
}
}




