// Different Ways of Data Input in Java.
/* 
public class DataInput {
    public static void main(String[] args) {
        int x =134;
        byte by=10;
        char ch='$';
        double db=56.555;
        float ft=3.4f;
        boolean b=true;

        System.out.println("x="+x);		
		System.out.println("b="+b);
		System.out.println("value of ch is "+ch);
		System.out.println("db is"+db);
		System.out.println("float value "+ft);
		System.out.println("boolean value "+b);
    }
}



// Data Input as a CommandLine Argument.

class DataInput {
    public static void main(String[] args) 
    {
		String s1="-",s2="-";
		s1=args[0];
		s2=args[1];

		System.out.println("String s1 is: "+s1);
		System.out.println("String s2 is: "+s2);
	}
}



class DataInput{
    public static void main(String[] args) {
        String s1="-", s2="-";
        
        try{
            s1=args[0];
            s2=args[1];
        }
        catch(Exception e)
        {   
		System.out.println("String s1 is: "+s1);
		System.out.println("String s2 is: "+s2);
        }
    }
}




We know the input is in form of strings and is is true even when we try to pass numeric 
values coz they are automatically converted into strings, then how to input the numeric values

class DataInputCmdln
{
	public static void main(String []args)
	{
		int x=args[0];
		double y=args[1];

		System.out.println("x is: "+x);
		System.out.println("y is: "+y);
	}
}




class DataInputCmdln
{
    public static void main(String[] args) {
        int x=Integer.parseInt(args[0]);
        short y=Short.parseShort(args[1]);

        System.out.println("x is: "+x);
        System.out.println("y is: "+y);
        System.out.println("x+y: "+(x+y));
    }
}



// 3. Input using java.io.InputStreamReader and java.io.BufferedReader

// Input Different Values From Keybord and Just Display Them.

import java.io.BufferedReader;
import java.io.InputStreamReader;
class IOUsingBI
{
    public static void main(String[] args) {
        InputStreamReader is=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(is);

        System.out.println(" \t Taking Input ");

        try{
            
        System.out.println(" Enter The String Value: ");
        String str= br.readLine();

        System.out.println(" Enter The Integer Value: ");
        int i = Integer.parseInt(br.readLine());

        System.out.println(" Enter The Double Value: ");
        double d= Double.parseDouble(br.readLine());

        System.out.println("Enter The Fractional Value: ");
        float f = Float.parseFloat(br.readLine());

        System.out.println(" Enter The Short Value: ");
        short s = Short.parseShort(br.readLine());

        System.out.println("\n Displaying Output: ");
        System.out.println("\n String: "+str+"\n double: "+d+"\n float: "+f+"\n short: "+s);
        }
        catch(Exception e)
        {

        }
        
    }
}



// Character Input Using java.io InputStreamReader and java.io.BufferedReader

import java.io.BufferedReader;
import java.io.InputStreamReader;
class CharIOUsingBI
{
    public static void main(String[] args) throws Exception {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("\n Enter an Character: ");
        char ch= br.readLine().charAt(0);

        System.out.println(ch);
    }
}

	4. Using java.util.Scanner to take the input from keyboard

import java.util.Scanner;
class InputUsingScannerObject
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);

		String str="";
		int x=0;
		double db=0.0;
		char ch='$';

		System.out.println("Enter any String: ");
		str=sc.nextLine();

		System.out.println("Enter any int value: ");
		x=sc.nextInt();

		System.out.println("Enter any double value: ");
		db=sc.nextDouble();

		System.out.println("Enter any character: ");
		ch=sc.next().charAt(0);

		System.out.println("String str: "+str);
		System.out.println("int value: "+x);
		System.out.println("double value: "+db);
		System.out.println("char value: "+ch);		
	}
}



import javax.swing.JOptionPane;
class InputUsingShowIpDialog
{
	public static void main(String []args)
	{
		int x=0;
		double y=0.0;

		x=Integer.parseInt(JOptionPane.showInputDialog("Enter any int value: "));	
		y=Double.parseDouble(JOptionPane.showInputDialog("Enter any double value: "));	
		
         // Message dialog boxes to display the values
        JOptionPane.showMessageDialog(null, "The value of int: " + x);
        JOptionPane.showMessageDialog(null, "The value of double: " + y);
	}
}	

*/

