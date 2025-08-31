// 5. Write a JAVA program to print a multiplication table of any number.

import java.util.Scanner;

class Table
{

public static void main(String args[])
{
 Scanner sc = new Scanner(System.in);

System.out.println("Enter the table number:");
int n = sc.nextInt();
int i;
System.out.println("Table of "+n+" is:");
for(i=1;i<=10;i++)
{
System.out.println(n*i);
}
}

}