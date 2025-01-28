// 5. Write a JAVA program to check whether a number is even or odd using a switch case.


import java.util.Scanner;

class EvenOddSwitch
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Enter a Number:");
int a=sc.nextInt();


int b=0;

if(a%2==0){
b=1;
}else if(a%2!=0){
b=2;
}

switch(b)
{
  case(1):
  System.out.println(a+" is Even number");
  break;
case(2):
 System.out.println(a+" is Odd Number");
  break;
default:
 System.out.println("Wrong Input");
  break;


}


}
}