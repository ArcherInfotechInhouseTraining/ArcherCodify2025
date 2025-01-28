// 6.Write a JAVA program to check whether a number is positive, negative or zero using switch case.

import java.util.Scanner;

class PosNegSwitch
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Enter a Number:");
int a=sc.nextInt();


int b=0;

if(a>0){
b=1;
}else if(a<0){
b=2;
}
switch(b)
{
  case(1):
  System.out.println(a+" is Positive number");
  break;
case(2):
 System.out.println(a+" is Negative Number");
  break;
default:
 System.out.println("Number is Zero");
  break;


}


}
}