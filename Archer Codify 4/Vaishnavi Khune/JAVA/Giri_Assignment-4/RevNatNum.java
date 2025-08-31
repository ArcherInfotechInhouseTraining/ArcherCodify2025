// 2. Write a JAVA program to print all natural numbers in reverse (from n to 1). 

import java.util.Scanner;


class RevNatNum
{

public static void main(String args[])

{
 
Scanner sc = new Scanner(System.in);

System.out.println("Enter a number ");
int n=sc.nextInt();


int i;

for(i=n;i>0;i--)
{

System.out.println(i);

}

}

}