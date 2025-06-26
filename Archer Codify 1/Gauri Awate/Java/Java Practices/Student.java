class Student
{
	private String name;
	private int age;
	private String grade;
	public Student()
	{
		this("Unknown",0,"Not assigned");
		System.out.println("In default constructor of student");
		
	}
	public Student(String name,int age)
	{
		this(name,age,"Not assigned");
		
		System.out.println("In para-1 constructor of student");

		
	}
	public Student(String name,int age,String grade)
	{
		System.out.println("In para-2 constructor of student");

		this.name=name;
		this.age=age;
		this.grade=grade;
	}
	public void display()
	{
		System.out.println("Name: "+name+"\tAge: "+age+"\tGrade: "+grade);
	}
	public static void main(String []args)
	{
		Student st=new Student();
		st.display();
		Student st1=new Student("Gauri",21);
		st1.display();
		Student st2=new Student("Mansi",22,"A");
		st2.display();


	}

	

}