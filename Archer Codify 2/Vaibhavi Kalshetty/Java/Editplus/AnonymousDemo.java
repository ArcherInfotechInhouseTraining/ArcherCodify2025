class Person
{
	private int no=3;
	public void set()
	{
		no=3;
	}
	public void show()
	{
		System.out.println("Number is:"+no);
	}
	public int display()
	{
		return no;
	}

}
class AnonymousDemo
{
	public static void main(String[] args) 
	{
		System.out.println("Anonymous obj creation");
		new Person().set();
		new Person().show();
		System.out.println("in main:"+new Person().display());

	}
}