// 4.Write a JAVA program to find the maximum between two numbers using a switch case.

import java.util.Scanner;

class MaxNumSwitch
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Enter Two Numbers:");
int a=sc.nextInt();
int c=sc.nextInt();

int b=0;

if(a>c){
b=1;
}else if(a<c){
b=2;
}

switch(b)
{
  case(1):
  System.out.println("Max number is :"+a);
  break;
case(2):
 System.out.println("Max number is :"+c);
  break;
default:
 System.out.println("Both number are equal");
  break;


}


}
}