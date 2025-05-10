// Write a JAVA program to enter the length and breadth of a rectangle and find its area using BuffredReader.



import java.io.InputStreamReader;
import java.io.BufferedReader;

class RectArea
{

   public static void main(String args[]) throws Exception
   {
    InputStreamReader isr=new InputStreamReader(System.in);
    BufferedReader br = new BufferedReader(isr);
     
   double a=0,b=0;
     
     System.out.println("Enter Length and Breadth  of a Rectangle:");
      a=Double.parseDouble(br.readLine());
      b=Double.parseDouble(br.readLine());
     
     System.out.println("Area of Rectangle = "+(a*b));
 
   }

}