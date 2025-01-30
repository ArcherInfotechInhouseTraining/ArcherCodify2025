//Write a Java program to enter two numbers and find their sum using BufferedReader.

import java.io.InputStreamReader;
import java.io.BufferedReader;

class Sum
{

   public static void main(String args[]) throws Exception
   {
    InputStreamReader isr=new InputStreamReader(System.in);
    BufferedReader br = new BufferedReader(isr);
     
    int a=0,b=0;
     
     System.out.println("Enter two numbers:");
      a=Integer.parseInt(br.readLine());
      b=Integer.parseInt(br.readLine());
     
     System.out.println("Sum of "+a+" and "+b+" is "+(a+b));
 
   }

}