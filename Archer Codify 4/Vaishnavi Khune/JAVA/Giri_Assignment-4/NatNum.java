// 1.Write a JAVA program to print all natural numbers from 1 to n.

import java.util.Scanner;


class NatNum
{

public static void main(String args[])

{
 
Scanner sc = new Scanner(System.in);

System.out.println("Enter a number ");
int n=sc.nextInt();

int i;

for(i=1;i<=n;i++)
{

System.out.println(i);

}

}

}