// Write a JAVA program to enter marks of five subjects and calculate total, average, and percentage.


import java.util.Scanner;

class StudMarks
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);
double a,b,c,d,e;

System.out.println("Enter the marks of five subjects out of  100:");
a= sc.nextDouble();
b= sc.nextDouble();
c= sc.nextDouble();
d= sc.nextDouble();
e= sc.nextDouble();

double total, avg, per;

total =(a+b+c+d+e);
avg=(total/5);
per=(total/600)*100;

System.out.println("Total marks obtained:"+total);
System.out.println("Average marks obtained:"+avg);
System.out.println("Percentage "+per);

}

}