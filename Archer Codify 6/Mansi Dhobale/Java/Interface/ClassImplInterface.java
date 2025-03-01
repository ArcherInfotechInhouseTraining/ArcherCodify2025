
interface Demo
{
	void show();
}
class Test
{
	public void view() {
		System.out.println("In view - Test");
	}
}
class Sample extends Test implements Demo
{
	public void show() { // must be public
		System.out.println("In Show implementation - Sample");
	}
	public void display() {
		System.out.println("In display - sample");
	}
}
class ClassImplInterface 
{
	public static void main(String[] args) 
	{
		System.out.println("Main Starts");
		Sample ob = new Sample();
		ob.show();
		ob.display();
		ob.view();
	}
}
