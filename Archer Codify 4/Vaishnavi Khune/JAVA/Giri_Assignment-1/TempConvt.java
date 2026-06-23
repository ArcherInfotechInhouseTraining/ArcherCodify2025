// Write a JAVA program to enter the temperature in Fahrenheit and convert it to Celsius

import java.util.Scanner;

class TempConvt
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);
double f=0.0;

System.out.println("Enter the Temperature in Fahrenheit :");
f= sc.nextDouble();

System.out.println("Temperature in Celcius : "+((f-32)*5/9));

}

}