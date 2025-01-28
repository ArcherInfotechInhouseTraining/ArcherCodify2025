// 6. Write a program to check entered number is an Abundant Number or not.

import java.util.Scanner;

class AbundantNum
{
public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Enter a number :");
int n = sc.nextInt();
int i;
int sum=0;

for(i=1;i<n;i++)
{
 if(n%i==0)
{
 sum=sum+i;

}
}

if(sum>n){
System.out.println(n+" is Abundant number");
}else
{
System.out.println(n+" is not Abundant number");
}

}

}
