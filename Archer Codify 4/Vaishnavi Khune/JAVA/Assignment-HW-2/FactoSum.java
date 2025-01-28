// 9. Write a program in Java to find the sum of the given series: S = 1! + 2! + 3! + …. + n!

import java.util.Scanner;

class FactoSum
{

public static void main(String []args)
{

Scanner sc = new Scanner(System.in);

System.out.println("Enter a number:");
int n= sc.nextInt();

int i;
int sum=0;


for(i=1;i<=n;i++)
{
int fact=1;
for(int j=i;j>0;j--)
{
fact=fact*j;

}
System.out.println("Fact="+fact);
sum=sum+fact;
System.out.println("sum= "+sum);

}
System.out.println("Answer="+sum);

}

}