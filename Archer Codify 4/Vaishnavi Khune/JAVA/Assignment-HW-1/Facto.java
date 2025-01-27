// 7. Write a program to calculate the factorial of the entered number.

import java.util.Scanner;

class Facto
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Enter a number:");
int n=sc.nextInt();
int fact=1;
int i;

for(i=n;i>0;i--){

fact= fact*i ;

}
System.out.println("Factorial of "+n+" is:"+fact);

}
}