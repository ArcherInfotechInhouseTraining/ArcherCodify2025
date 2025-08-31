// 1. Write a JAVA program to print the day of the week name using a switch case.


import java.util.Scanner;

class WeekDays
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);
int a;

System.out.println("Enter the day");
a=sc.nextInt();

switch(a)
{

case(1):
System.out.println("Sunday");
 break;

case(2):
System.out.println("Monday");
 break;


case(3):
System.out.println("Tuesday");
 break;

case(4):
System.out.println("Wedneday");
 break;

case(5):
System.out.println("Thursday");
 break;

case(6):
System.out.println("Friday");
 break;

case(7):
System.out.println("Saturday");
 break;
default:
System.out.println("Wrong day entered.");
}

}

}