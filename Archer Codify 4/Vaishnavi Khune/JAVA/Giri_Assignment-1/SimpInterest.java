// Write a JAVA program to enter P, T, and R and calculate Simple Interest.

import java.util.Scanner;

class SimpInterest
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);
double P, T, R;

System.out.println("Enter the Principle amount, number of years and rate of interest :");
P= sc.nextDouble();

T= sc.nextDouble();

R= sc.nextDouble();

System.out.println("Total interest is:"+((P*T*R)/100));

}

}

