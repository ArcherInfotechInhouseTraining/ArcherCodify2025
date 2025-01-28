// Write a JAVA program to enter the radius of a circle and find its diameter, circumference, and area using a Scanner.

import java.util.Scanner;

class Circle
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);
double r=0.0;
System.out.println("Enter the Radius of a circle:");
  r=sc.nextDouble();

System.out.println("Diameter of a circle:"+(2*r));
System.out.println("Circumference of a circle: "+(2*3.14*r));
System.out.println("Area of a circle:"+(3.14*r*r));

}

}