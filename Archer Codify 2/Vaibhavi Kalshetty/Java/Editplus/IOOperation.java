import java.util.Scanner;
class Person
{
	Scanner sc= new Scanner(System.in);
	private int rollno;
	private String name;
	public void setData()
	{
		System.out.println("Enter the name:");
		name=sc.nextLine();
		System.out.println("Enter the rollno:");
		rollno=sc.nextInt();
	}
	public void showData()
	{
		System.out.println("\n Rollno:"+rollno+"\t Name:"+name);
	}
}

class IOOperation
{
	public static void main(String arg[])
	{
		Person p1=new Person();
		p1.setData();
		p1.showData();
	}
}