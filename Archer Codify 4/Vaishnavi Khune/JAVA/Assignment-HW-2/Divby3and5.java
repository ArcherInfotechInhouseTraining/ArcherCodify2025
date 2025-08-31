// 5. Write a program to find whether the entered number is divisible by 3 and 5 or not using ? :

import java.util.Scanner;

class Divby3and5
{
public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Enter a number:");
int n=sc.nextInt();


if(n%3==0 && n%5==0)
{
System.out.println(n+" is divisible by 3 and 5.");
}else 
{
System.out.println(n+" is not divisible by 3 and 5.");

}

}

}