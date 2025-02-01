interface Example
{
	void present();
}
interface Demo extends Example
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
	public void present() {
		System.out.println("In present - sample");
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
		ob.present();
	}
}
