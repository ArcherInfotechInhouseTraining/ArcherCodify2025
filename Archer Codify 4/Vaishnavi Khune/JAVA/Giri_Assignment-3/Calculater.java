// 7. Write a JAVA program to create a Simple Calculator using a switch case.

import java.util.Scanner;

class Calculater
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Select the Operation: \n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division");
int a=sc.nextInt();

System.out.println("Enter two numbers:");
int b=sc.nextInt();
int c=sc.nextInt();

float ans;

switch(a)
{

case(1):
ans=b+c;
System.out.println("Addition is :"+ans);
break;

case(2):
ans=b-c;
System.out.println("Subtraction is :"+ans);
break;

case(3):
 ans=b*c;
System.out.println("Multiplication is :"+ans);
break;

case(4):
float an=(float)b/c;
System.out.println("Division is :"+an);
break;
 default:
System.out.println("Wrong option selected.");

}

 }
}