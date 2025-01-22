//Input using java.io.InputStreamReader and java.io.BufferedReader
import java.io.*;
class InputUsingIOBuffer
{
	public static void main(String args[]) throws Exception
	{
          InputStreamReader isr=new InputStreamReader(System.in);
          BufferedReader br=new BufferedReader(isr);
	System.out.println("\nEnter integer value:");
          int x=Integer.parseInt(br.readLine());
System.out.println("\nEnter double value:");
          double y=Double.parseDouble(br.readLine());
System.out.println("\nEnter String value:");
          String str=br.readLine();
          System.out.println("\nInteger:"+x);
          System.out.println("\nDouble:"+y);
	  System.out.println("\nString is:"+str);
	}
}