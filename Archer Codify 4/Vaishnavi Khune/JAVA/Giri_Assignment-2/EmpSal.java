/* 7. Write a JAVA program to input the basic salary of an employee and calculate its Gross salary according to the following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

import java.util.Scanner;

class EmpSal
{
public static void main(String args[])
{

Scanner sc =new Scanner(System.in);

int sal;
float grosal;

System.out.println("Enter the Basic Salary of employee:");
sal=sc.nextInt();

if(sal<=10000)
{
grosal=sal+0.2*sal+0.8*sal;

System.out.println("Your Gross Salary is :"+grosal);

}else if(sal>10000 && sal<=20000)
{
grosal=sal+0.25*sal+0.9*sal;

System.out.println("Your Gross Salary is :"+grosal);

}else if(sal>20000)
{
grosal=sal+0.3*sal+0.95*sal;

System.out.println("Your Gross Salary is :"+grosal);

}



}
}

