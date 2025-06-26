// 1.Write a JAVA program to find maximum between two numbers.

import java.util.Scanner;

class MaxNum
{
public static void main(String args[])
{

Scanner sc =new Scanner(System.in);
int a=0,b=0;

System.out.println("Enter two number:");
a=sc.nextInt();
b=sc.nextInt();

if(a>b)
{
System.out.println("Max number="+a);
}else
{
System.out.println("Max number="+b);

}

}
}
