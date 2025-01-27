// 2. Write a JAVA program to check whether a number is negative, positive, or zero.

import java.util.Scanner;

class PosNeg
{
public static void main(String args[])
{

Scanner sc =new Scanner(System.in);
int a=0;

System.out.println("Enter a number:");
a=sc.nextInt();

if(a>0)
{
System.out.println("Number is Positive");
}else if(a<0)
{
System.out.println("Number is Negative");

}else
{
System.out.println("Number is Zero");
}

}
}