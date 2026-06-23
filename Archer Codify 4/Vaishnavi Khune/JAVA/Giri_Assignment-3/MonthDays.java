// 2. Write a JAVA program to print the total number of days in a month using a switch case.

import java.util.Scanner;

class MonthDays
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Choose the Month:\n 1) January \n 2) February \n 3) March \n 4) April\n 5) May \n 6) June \n 7) July \n 8) August \n 9) September \n 10) Octomber \n 11) November \n 12) December");


int a;
System.out.println("Enter the month:");
a=sc.nextInt();

switch(a)
{

case(1):
case(3):
case(5):
case(7):
case(8):
case(10):
case(12):
System.out.println("Total number of days: 31");
break;

case(2):
System.out.println("Total number of days: 28 or 29");
break;

case(4):
case(6):
case(9):
case(11):
System.out.println("Total number of days: 30");
break;

default:
System.out.println("Wrong month entered");


}

}
}

