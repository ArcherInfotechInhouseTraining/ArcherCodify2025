/* 7. Write a program to enter the number and perform the menu-driven operation using the switch case 
  case 1:
	Write a JAVA program to find the sum of all natural numbers between 1 to n.
  case 2:
	Write a JAVA program to check whether a number is a Prime number or not.
  case 3: 
	Write a JAVA program to calculate the factorial of a number.
  case 4:
	Write a JAVA program to enter a number and print it in words.
*/

import java.util.Scanner;

class MenuSwitch
{

public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Select an Option:\n 1) sum of all natural numbers between 1 to n \n 2) check whether a number is a Prime number or not \n 3) calculate the factorial of a number \n 4) enter a number and print it in words");
int n = sc.nextInt();
int i;
int ans=0;
int flag=0;
long fact=1;

switch(n)

{
  case(1):
//sum of all natural numbers between 1 to n 

System.out.println("Enter a number:");
int a=sc.nextInt();

for(i=1;i<=a;i++){

ans=ans+i;

}
System.out.println("Sum of all natural numbers from 1 to "+a+" is "+ans);


break;


case(2):
//check whether a number is a Prime number or not

System.out.println("Enter a number:");
n=sc.nextInt();

   for(i=2;i<=n/2;i++)
   {

      if(n%i==0)
      {

        flag++;

      }
      
   }
 
System.out.println("Flag="+flag);


if(flag==0)
{

System.out.println("Number is prime");

}else if(flag>0)
{
System.out.println("Number is not prime");
}


break;

case(3):
//Calculate the factorial of a number

System.out.println("Enter a number:");
n=sc.nextInt();

for(i=n;i>0;i--){

fact= fact*i ;

}

System.out.println("factorial of "+n+" is  "+fact);

break;

case(4):
//Enter a number and print it in words

System.out.println("Enter a number:");
n=sc.nextInt();

switch(n)
{

case(1):
System.out.println("One");
break;
case(2):
System.out.println("Two");
break;
case(3):
System.out.println("Three");
break;
case(4):
System.out.println("Four");
break;
case(5):
System.out.println("Five");
break;
case(6):
System.out.println("six");
break;
case(7):
System.out.println("seven");
break;
case(8):
System.out.println("eight");
break;
case(9):
System.out.println("nine");
break;
default:
System.out.println("Number is not single digit.");
break;
}

break;
 
default:
System.out.println("Wrong option Selected.");
}

}
}