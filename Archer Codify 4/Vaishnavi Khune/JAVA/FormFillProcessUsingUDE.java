import java.util.Scanner;
import java.io.*;
class AgeException extends Exception
{
	private String message;
	public AgeException()
	{
		super("Age Issue");// it will call para contractor of base class i.e. Exception class 
	}
	public AgeException(String msg)
	{
		super(msg);
		message=msg;
	}
	public String toString()
	{
		return "The Exception Due To: "+message;
	}
}
class FormFill
{
	private String name;
	private int age;
	private double per;
	public FormFill()
	{
		name="";
		age=0;
		per=0.0;
	}
	public void input() throws IOException, AgeException
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the name: ");
		name=sc.nextLine();
		System.out.println("Enter the age: ");
		age=sc.nextInt();
		if(age<=20 || age>30)
		{
			throw new AgeException("Problem due to age is not within age window");
		}
		System.out.println("Enter the percentage: ");
		per=sc.nextDouble();
	}
	public void output()
	{		
		System.out.println("Student Details: Name: "+name+"\n Age: "+age+"\t Percentage: "+per);	
	}
}

class FormFillProcessUsingUDE
{
	public static void main(String []args)
	{
		FormFill ob=new FormFill();
		try
		{
			ob.input();
			ob.output();
		}
		catch(AgeException e)
		{
			System.out.println("---------------------------------");
			System.out.println("One: "+e.getMessage());
			System.out.println("---------------------------------");
			System.out.println("Two: "+e);
			System.out.println("---------------------------------");
			System.out.println("Three:");
			e.printStackTrace();
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
}
