// 5. Write a program to enter the runs scored by a player in three matches and display the highest 
// runs scored using the ? :  operator.

import java.util.Scanner;

class Runs
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);
int a,b,c;

System.out.println("Enter the runs scored by a player in three matches:");
a=sc.nextInt(); 
b=sc.nextInt(); 
c=sc.nextInt();  

int z= (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);

System.out.println("Highest Score is:"+z);

}
}