// 6. Write a JAVA program to calculate the sum of digits of a number.

import java.util.Scanner;

class DigitSum
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Enter a Number");
int n = sc.nextInt();
int sum=0;
while(n>0){

sum=sum+(n%10);
n=n/10;
}
System.out.println("Sum of digits is :"+sum);
}

}

