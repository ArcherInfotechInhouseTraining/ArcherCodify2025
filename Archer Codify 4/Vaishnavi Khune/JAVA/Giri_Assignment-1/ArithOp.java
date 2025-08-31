// Write a JAVA program to enter two numbers and perform all arithmetic operations.


import java.io.InputStreamReader;
import java.io.BufferedReader;

class ArithOp
{

   public static void main(String args[]) throws Exception
   {
    InputStreamReader isr=new InputStreamReader(System.in);
    BufferedReader br = new BufferedReader(isr);
     
    int a=0,b=0;
     
     System.out.println("Enter two numbers:");
      a=Integer.parseInt(br.readLine());
      b=Integer.parseInt(br.readLine());
     
     System.out.println("Sum of "+a+" and "+b+" = "+(a+b));

     System.out.println("Subtraction of "+a+" and "+b+" = "+(a-b));
     System.out.println("Multiplication of "+a+" and "+b+" = "+(a*b));
     System.out.println("Division of "+a+" and "+b+" = "+(a/b));

 
   }

}