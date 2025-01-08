
import java.util.Scanner;
class Student
{
	private int id;
	private double per;

	public void in()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the student ID: ");
		id=sc.nextInt();

		System.out.println("Enter the Percentage: ");
		per=sc.nextDouble();
	}
	public void out()
	{
		System.out.println("\n Student ID: "+id+"\n Percentage: "+per);
	}
}
class DemoStudent
{
	public static void main(String []args)
	{
		Student s1=new Student();
		s1.in();
		s1.out();

		Student s2=new Student();
		s2.in();
		s2.out();
	}
}	
